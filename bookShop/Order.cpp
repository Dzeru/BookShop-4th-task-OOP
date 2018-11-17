#include "Order.h"
#include <string>
#include <map>

using namespace std;

string Order::getSurname()
{
	return surname;
}

string Order::getPhoneNumber()
{
	return phoneNumber;
}

string Order::getEmail()
{
	return email;
}

map<Book, int> Order::getOrderList()
{
	return orderList;
}

void Order::setSurname(string s)
{
	surname = s;
}

void Order::setPhoneNumber(string ph)
{
	phoneNumber = ph;
}

void Order::setEmail(string e)
{
	email = e;
}

void Order::setOrderList(map<Book, int> o)
{
	orderList = o;
}