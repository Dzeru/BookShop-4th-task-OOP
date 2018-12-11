#pragma once
#include <map>
#include "Order.h"
#include "Logger.h"
#include "Database.h"

class BookManager
{
public:
	static BookManager* getInstance()
	{
		if (!bookManagerInstance)
		{
			bookManagerInstance = new BookManager();
		}
		return bookManagerInstance;
	}

	std::pair<int, bool> processOrder(Order* order, int maxPossibleProcessingTime)
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
					// � ������ ������� ������� ����� ����������
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
			timeToProcessOrder += std::rand() % maxPossibleProcessingTime + 1;
		}

		logger->writeLog("BOOKMANAGER: order with id = " + std::to_string(order->getId()) + " is processed in " + std::to_string(timeToProcessOrder) + " days \n");
		Database::getInstance()->updateOrder(order);

		return std::pair<int, bool>(timeToProcessOrder, !orderToPublisher.empty());
	}

private:
	static BookManager* bookManagerInstance;
	BookManager() {};
	BookManager(const BookManager&);
	BookManager& operator = (BookManager&);
};