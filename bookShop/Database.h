#pragma once
#include <vector>
#include <set>
#include <map>
#include "Order.h"
#include "Logger.h"

class Database
{
public:
	static int amountOfSendedOrders;

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
		logger->writeLog("DATABASE: обновлена книга с id = " + std::to_string(id) + "\n");
		books[id] = b;
		return true;
	}

	Book* findBook(int id)
	{
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: поиск книги с id = " + std::to_string(id) + "\n");
		
		Book* fb;

		for (auto i = books.begin(); (fb == NULL) && (i != books.end()); i++)
		{
			if (i->first == id)
				fb = i->second;
		}
		
		return fb;
	}

	bool updateOrder(Order* o)
	{
		int id = o->getId();
		Logger* logger = Logger::getInstance();
		logger->writeLog("DATABASE: обновлен заказ с id = " + std::to_string(id) + "\n");
		orders[id] = o;
		return true;
	}

	std::map<int, std::vector<Order*> > findAllOrdersByDay()
	{
		return ordersByDay;
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
		logger->writeLog("DATABASE: поиск заказа с id = " + std::to_string(id) + "\n");

		Order* fo;

		for (auto i = orders.begin(); (fo == NULL) && (i != orders.end()); i++)
		{
			if (i->first == id)
				fo = i->second;
		}

		return fo;
	}

	bool updateOrdersByDay(Order* o, int day)
	{
		Logger::getInstance()->writeLog("DATABASE: обновлен список заказов за " + std::to_string(day) + " день \n");
		ordersByDay[day].push_back(o);
		return true;
	}

private:
	static Database* databaseInstance;
	Database() {}
	Database(const Database&);
	Database& operator = (Database&);

	std::map<int, Book*> books;
	std::map<int, Order*> orders;
	std::map<int, std::vector<Order*> > ordersByDay;
};