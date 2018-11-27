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
	static void getOrder(Order o); //�������� �����
	static void sendOrder(Order o); //��������� �����
	static void replenishBooks(vector<Book> b); //���������� ����� � ������������
	static void bookBook(Book book); //�������� �����
};