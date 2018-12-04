#pragma once
#include <string>
#include <vector>
#include <set>

class Book
{
public:
	Book() {};
	~Book() {};

	std::set<std::string> getGenres();
	std::string getBookName();
	std::string getAuthor();
	std::string getPublisher();
	std::string getLang();

	float getPrice();
	int getYearOfPublishing();
	int getNumberOfPages();
	int getMarkup(); //наценка в процентах
	int getRating();
	std::string getAgeRequirement();
	int getCount();

	bool getIsNew();

	void setGenres(std::set<std::string> g);
	void setBookName(std::string bn);
	void setAuthor(std::string a);
	void setPublisher(std::string p);
	void setLang(std::string l);

	void setPrice(float p);
	void setYearOfPublishing(int y);
	void setNumberOfPages(int n);
	void setMarkup(int m); //наценка в процентах
	void setRating(int r);
	void setAgeRequirement(std::string a);
	void setCount(int c);

	void setIsNew(int i);
private:
	std::set<std::string> genres;
	std::string bookName;
	std::string author;
	std::string publisher;
	std::string lang;

	float price;
	int yearOfPublishing;
	int numberOfPages;
	int markup; //наценка в процентах
	int rating;
	std::string ageRequirement;
	int count; //количество экземпляров в магазине

	/*
	Последняя изданная книга данного автора
	*/
	bool isNew;
};