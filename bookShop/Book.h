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
	int markup; //������� � ���������
	int rating;
	int ageRequirement;
	int count; //���������� ����������� � ��������

	/*
	��������� �������� ����� ������� ������
	*/
	bool isNew;

	set<string> getGenres();
	string getAuthor();
	string getPublisher();
	string getLang();

	int getPrice();
	int getYearOfPublishing();
	int getNumberOfPages();
	int getMarkup(); //������� � ���������
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
	void setMarkup(int m); //������� � ���������
	void setRating(int r);
	void setAgeRequirement(int a);
	void setCount(int c);

	void setIsNew(int i);
};