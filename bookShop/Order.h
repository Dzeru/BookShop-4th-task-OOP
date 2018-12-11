#pragma once
#include <string>
#include <map>
#include "Book.h"

class Order : public Entity
{
public:
	std::string getSurname();
	std::string getPhoneNumber();
	std::string getEmail();
	std::map<Book*, int> getOrderList();

	void setSurname(std::string s);
	void setPhoneNumber(std::string ph);
	void setEmail(std::string e);
	void setOrderList(std::map<Book*, int> o);
private:
	std::string surname;
	std::string phoneNumber;
	std::string email;
	std::map<Book*, int> orderList;
};