#pragma once
#include <vector>
#include <set>
#include <map>
#include "Book.h"
#include "Order.h"


class Database
{
public:

private:
	set<Book> booksInShop;
	set<Order> orders;
	map<long, int> countOfOrdersByBook; //id книги, количество заказов
};