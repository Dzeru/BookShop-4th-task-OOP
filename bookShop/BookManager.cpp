#include "BookManager.h"
#include "Logger.h"

BookManager* BookManager::bookManagerInstance = 0;

std::pair<int, bool> BookManager::processOrder(Order* order, int maxPossibleProcessingTime)
{
	Logger* logger = Logger::getInstance();

	std::map<Book*, int> orderedBooks = order->getOrderList();
	std::map<Book*, int> orderToPublisher;

	int timeToProcessOrder = std::rand() % maxPossibleProcessingTime + 1;

	for (auto i = orderedBooks.begin(); i != orderedBooks.end(); i++)
	{
		Book* bookFromOrder = i->first;
		int countOfBookFromOrder = i->second;

		int id = bookFromOrder->getId();

		if (id < 0 || id == NULL)
		{
			orderToPublisher.insert(std::pair<Book*, int>(bookFromOrder, countOfBookFromOrder));
		}
		else
		{
			Book* fb = Database::getInstance()->findBook(id);

			if (fb != NULL)
			{
				if (countOfBookFromOrder <= fb->getCount())
				{
					fb->setCount(fb->getCount() - countOfBookFromOrder);
				}
				else
				{
					int delta = countOfBookFromOrder - fb->getCount();
					fb->setCount(0);
					orderToPublisher.insert(std::pair<Book*, int>(fb, delta));
				}
				// — каждым заказом рейтинг книги повышаетс€
				fb->setRating(fb->getRating() + 1);
				Database::getInstance()->updateBook(fb);
			}
			else
			{
				orderToPublisher.insert(std::pair<Book*, int>(bookFromOrder, countOfBookFromOrder));
			}
		}
	}

	if (!orderToPublisher.empty())
	{
		Database::amountOfSendedOrders++;
		timeToProcessOrder += std::rand() % maxPossibleProcessingTime + 1;
		logger->writeLog("BOOKMANAGER: отправлен заказ в издательство \n");
	}

	logger->writeLog("BOOKMANAGER: заказ с id = " + std::to_string(order->getId()) + " будет выполнен за " + std::to_string(timeToProcessOrder) + " дней \n");
	Database::getInstance()->updateOrder(order);

	return std::pair<int, bool>(timeToProcessOrder, !orderToPublisher.empty());
}

void BookManager::checkSmallAmountOfBooksAndOrder(std::vector<int> idsOfBooks, int maxPossibleProcessingTime)
{
	Logger* logger = Logger::getInstance();

	std::map<Book*, int> orderToPublisher;
	int timeToProcessOrder = 0;

	for (int i = 0; i < idsOfBooks.size(); i++)
	{
		Book* book = Database::getInstance()->findBook(idsOfBooks[i]);

		if (book->getCount() < 3)
		{
			orderToPublisher.insert(std::pair<Book*, int>(book, 10));		
		}
	}

	Database::amountOfSendedOrders++;
	timeToProcessOrder += std::rand() % maxPossibleProcessingTime + 1;
	logger->writeLog("BOOKMANAGER: отправлен заказ в издательство \n");
}