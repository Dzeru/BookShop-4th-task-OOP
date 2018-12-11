#include "Order.h"
#include <string>
#include <map>

std::string Order::getSurname()
{
	return surname;
}

std::string Order::getPhoneNumber()
{
	return phoneNumber;
}

std::string Order::getEmail()
{
	return email;
}

std::map<Book*, int> Order::getOrderList()
{
	return orderList;
}

void Order::setSurname(std::string s)
{
	surname = s;
}

void Order::setPhoneNumber(std::string ph)
{
	phoneNumber = ph;
}

void Order::setEmail(std::string e)
{
	email = e;
}

void Order::setOrderList(std::map<Book*, int> o)
{
	orderList = o;
}