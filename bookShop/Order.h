#pragma once
#include <string>
#include <map>
#include "Book.h"

using namespace std;

class Order
{
private:
	int id;

	string surname;
	string phoneNumber;
	string email;
	map<Book, int> orderList;
public:
	string getSurname();
	string getPhoneNumber();
	string getEmail();
	map<Book, int> getOrderList();

	void setSurname(string s);
	void setPhoneNumber(string ph);
	void setEmail(string e);
	void setOrderList(map<Book, int> o);
};