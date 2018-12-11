#pragma once
#include "TestConstants.h"
#include "Database.h"
#include "Logger.h"

class BookFactory
{
public:
	static Book* getRandomBook(int usualBookPercentMarkup, int newBookPercentMarkup)
	{
		Book* book = new Book();

		book->setBookName(TestConstants::getRandomBookName());
		book->setAuthor(TestConstants::getRandomBookAuthor());
		book->setPublisher(TestConstants::getRandomPublisher());
		book->setYearOfPublishing(TestConstants::getRandomYearOfPublishing());
		book->setAgeRequirement(TestConstants::getRandomAgeRequirement());
		book->setGenres(TestConstants::getRandomGenres());
		book->setNumberOfPages(TestConstants::getRandomNumberOfPages());
		book->setLang(TestConstants::getRandomLanguage());
		book->setIsNew(TestConstants::getRandomIsNew());
		
		if (book->getIsNew())
		{
			book->setMarkup(newBookPercentMarkup);
		}
		else
		{
			book->setMarkup(usualBookPercentMarkup);
		}

		float price = ((float) book->getNumberOfPages()) / 2.0 * ((float) book->getMarkup()) / 100.0;

		book->setPrice(price);

		book->setRating(0);
		book->setCount((std::rand() % 10) + 1);

		return book;
	}

	static std::vector<Book*> getRandomListOfBooks(int usualMarkup, int newMarkup)
	{
		Logger* logger = Logger::getInstance();

		int rnd = std::rand() % 30 + 1;

		if (rnd < 10)
			rnd += 10;

		std::vector<Book*> randomBooks;

		for (int i = 0; i < rnd; i++)
		{
			Book* newRandomBook = getRandomBook(usualMarkup, newMarkup);

			logger->writeLog("generate random book, id = " + std::to_string(newRandomBook->getId()) + ", book name = " + newRandomBook->getBookName() + "\n");

			randomBooks.push_back(newRandomBook);
			bool upd = Database::getInstance()->updateBook(newRandomBook);
			logger->writeLog("is book with id " + std::to_string(newRandomBook->getId()) + " updated: ");
			if (upd)
			{
				logger->writeLog("yes \n");
			}
			else
			{
				logger->writeLog("no \n");
			}
		}

		logger->writeLog("book database size = " + std::to_string(Database::getInstance()->databaseSize("books")) + "\n");
		return randomBooks;
	}
};