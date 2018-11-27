#pragma once
#include <string>
#include <map>
#include <vector>
#include "Order.h"
#include "Book.h"

using namespace std;

class BookManager
{
public:
	static void getOrder(Order o); //Получить заказ
	static void sendOrder(Order o); //Отправить заказ
	static void replenishBooks(vector<Book> b); //Дозаказать книгу в издательстве
	static void bookBook(Book book); //Отложить книгу
};