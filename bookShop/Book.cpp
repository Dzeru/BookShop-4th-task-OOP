#include "Book.h"
#include "Database.h"

std::set<std::string> Book::getGenres()
{
	return genres;
}

std::string Book::getBookName()
{
	return bookName;
}

std::string Book::getAuthor()
{
	return author;
}

std::string Book::getPublisher()
{
	return publisher;
}

std::string Book::getLang()
{
	return lang;
}

float Book::getPrice()
{
	return price;
}

int Book::getYearOfPublishing()
{
	return yearOfPublishing;
}

int Book::getNumberOfPages()
{
	return numberOfPages;
}

int Book::getMarkup()
{
	return markup;
}

int Book::getRating()
{
	return rating;
}

std::string Book::getAgeRequirement()
{
	return ageRequirement;
}

int Book::getCount()
{
	return count;
}

bool Book::getIsNew()
{
	return isNew;
}

void Book::setGenres(std::set<std::string> g)
{
	genres = g;
}

void Book::setBookName(std::string bn)
{
	bookName = bn;
}

void Book::setAuthor(std::string a)
{
	author = a;
}

void Book::setPublisher(std::string p)
{
	publisher = p;
}

void Book::setLang(std::string l)
{
	lang = l;
}

void Book::setPrice(float p)
{
	price = p;
}

void Book::setYearOfPublishing(int y)
{
	yearOfPublishing = y;
}

void Book::setNumberOfPages(int n)
{
	numberOfPages = n;
}

void Book::setMarkup(int m)
{
	markup = m;
}

void Book::setRating(int r)
{
	rating = r;
}

void Book::setAgeRequirement(std::string a)
{
	ageRequirement = a;
}

void Book::setCount(int c)
{
	count = c;
}

void Book::setIsNew(int i)
{
	isNew = i;
}
