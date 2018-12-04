#pragma once
#include "Book.h"
#include "TestConstants.h"

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

		float price = book->getNumberOfPages() / 2 * (book->getMarkup() / 100);

		book->setPrice(price);

		book->setRating(0);
		book->setCount((std::rand() % 10) + 1);

		return book;
	}

	static std::vector<Book*> getRandomListOfBooks(int usualMarkup, int newMarkup)
	{
		int rnd = std::rand() % 30 + 1;

		if (rnd < 10)
			rnd += 10;

		std::vector<Book*> randomBooks;

		for (int i = 0; i < rnd; i++)
		{
			randomBooks.push_back(getRandomBook(usualMarkup, newMarkup));
		}

		return randomBooks;
	}
};