#pragma once
#include <vector>
#include <set>
#include <map>
#include "Order.h"
#include "Logger.h"

class Database
{
public:
	static Database* getInstance()
	{
		if (!databaseInstance)
			databaseInstance = new Database();
		return databaseInstance;
	}

	int databaseSize(std::string database)
	{
		if (database == "books")
		{
			return books.size();
		}
		
		if (database == "orders")
		{
			return orders.size();
		}
	}

	void printBookDatabase()
	{
		Logger* logger = Logger::getInstance();
		for(std::map<int, Book*>::iterator i = books.begin(); i != books.end(); i++)
		{
			logger->writeLog(std::to_string(i->first) + " " + i->second->getBookName() + "\n");
		}
	}

	bool updateBook(Book* b)
	{
		int id = b->getId();
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: update book " + std::to_string(id) + "\n");
		books[id] = b;
		return true;
	}

	Book* findBook(int id)
	{
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: find book " + std::to_string(id) + "\n");
		
		Book* fb;

		for (auto i = books.begin(); (fb == NULL) && (i != books.end()); i++)
		{
			logger->writeLog("DATABASE: find book iter " + std::to_string(i->first) + " " + std::to_string(id) + "\n");
			if (i->first == id)
				fb = i->second;
		}
		
		return fb;
	}

	bool updateOrder(Order* o)
	{
		int id = o->getId();
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: update order " + std::to_string(id) + "\n");
		orders[id] = o;
		return true;
	}

	std::map<int, Book*> findAllBooksMap()
	{
		return books;
	}

	std::vector<Book*> findAllBooksVector()
	{
		std::vector<Book*> allBooks;

		for (auto i = books.begin(); i != books.end(); i++)
		{
			allBooks.push_back(i->second);
		}

		return allBooks;
	}

	Order* findOrder(int id)
	{
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: find order " + std::to_string(id) + "\n");

		Order* fo;

		for (auto i = orders.begin(); (fo == NULL) && (i != orders.end()); i++)
		{
			logger->writeLog("DATABASE: find order iter " + std::to_string(i->first) + " " + std::to_string(id) + "\n");
			if (i->first == id)
				fo = i->second;
		}

		return fo;
	}

private:
	static Database* databaseInstance;
	Database() {}
	Database(const Database&);
	Database& operator = (Database&);

	std::map<int, Book*> books;
	std::map<int, Order*> orders;
};