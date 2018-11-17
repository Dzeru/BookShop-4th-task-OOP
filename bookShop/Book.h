#pragma once
#include <string>
#include <vector>

using namespace std;

class Book
{
private:
	vector<string> genres;
	string author;
	string publisher;
	string lang;

	int price;
	int yearOfPublishing;
	int numberOfPages;
	int markup; //наценка в процентах
	int rating;
	int ageRequirement;

	bool isNew;

	vector<string> getGenres();
	string getAuthor();
	string getPublisher();
	string getLang();

	int getPrice();
	int getYearOfPublishing();
	int getNumberOfPages();
	int getMarkup(); //наценка в процентах
	int getRating();
	int getAgeRequirement();

	bool getIsNew();


	void setGenres(vector<string> g);
	void setAuthor(string a);
	void setPublisher(string p);
	void setLang(string l);

	void setPrice(int p);
	void setYearOfPublishing(int y);
	void setNumberOfPages(int n);
	void setMarkup(int m); //наценка в процентах
	void setRating(int r);
	void setAgeRequirement(int a);

	void setIsNew(int i);
};