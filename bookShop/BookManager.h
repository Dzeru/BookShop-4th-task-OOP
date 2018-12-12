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

	std::pair<int, bool> processOrder(Order* order, int maxPossibleProcessingTime);
	

private:
	static BookManager* bookManagerInstance;
	BookManager() {};
	BookManager(const BookManager&);
	BookManager& operator = (BookManager&);
};