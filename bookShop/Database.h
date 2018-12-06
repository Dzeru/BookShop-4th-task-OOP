#pragma once
#include <vector>
#include <set>
#include <map>
#include "Book.h"
//#include "Order.h"


class Database
{
public:
	static Database* getInstance()
	{
		if (!databaseInstance)
			databaseInstance = new Database();
		return databaseInstance;
	}

	bool updateBook(Book* b)
	{
		int id = b->getId();
		if (id == NULL)
			return false;
		books[id] = b;
		return true;
	}

	Book* findBook(int id)
	{
		return books[id];
	}

private:
	static Database* databaseInstance;
	Database() {}
	Database(const Database&);
	Database& operator = (Database&);

	std::map<int, Book*> books;
	//static std::map<int, Order*> orders;
	//std::map<long, int> countOfOrdersByBook; //id книги, количество заказов
};