#pragma once
#include <string>
#include <vector>
#include <set>

using namespace std;

class Book
{
private:
	set<string> genres;
	string author;
	string publisher;
	string lang;

	int price;
	int yearOfPublishing;
	int numberOfPages;
	int markup; //наценка в процентах
	int rating;
	int ageRequirement;
	int count; //количество экземпляров в магазине

	/*
	Последняя изданная книга данного автора
	*/
	bool isNew;

	set<string> getGenres();
	string getAuthor();
	string getPublisher();
	string getLang();

	int getPrice();
	int getYearOfPublishing();
	int getNumberOfPages();
	int getMarkup(); //наценка в процентах
	int getRating();
	int getAgeRequirement();
	int getCount();

	bool getIsNew();

	void setGenres(set<string> g);
	void setAuthor(string a);
	void setPublisher(string p);
	void setLang(string l);

	void setPrice(int p);
	void setYearOfPublishing(int y);
	void setNumberOfPages(int n);
	void setMarkup(int m); //наценка в процентах
	void setRating(int r);
	void setAgeRequirement(int a);
	void setCount(int c);

	void setIsNew(int i);
};