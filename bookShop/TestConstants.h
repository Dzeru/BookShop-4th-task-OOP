#pragma once
#include "Constants.h"
#include <vector>
#include <set>

class TestConstants
{
public:
	TestConstants() {};
	~TestConstants() {};

	static std::string getRandomAgeRequirement()
	{
		return ageRequirementTest[std::rand() % ageRequirementTest.size()];
	}

	static std::string getRandomLanguage()
	{
		return languageTest[std::rand() % languageTest.size()];
	}

	static std::set<std::string> getRandomGenres()
	{
		int numberOfGenres = std::rand() % 5 + 1;

		std::set<std::string> genres;

		for (int i = 0; i < numberOfGenres; i++)
		{
			genres.insert(genresTest[std::rand() % genresTest.size()]);
		}

		return genres;
	}

	static std::string getRandomBookName()
	{
		int i1 = std::rand() % bookName1Test.size();
		int i2 = std::rand() % bookName2Test.size();
		int i3 = std::rand() % bookName3Test.size();

		return bookName1Test[i1] + " " + bookName2Test[i2] + " " + bookName3Test[i3];
	}

	static std::string getRandomOrderSurname()
	{
		return orderSurnameTest[std::rand() % orderSurnameTest.size()];
	}

	static std::string getRandomOrderEmail()
	{
		return orderEmailTest[std::rand() % orderEmailTest.size()];
	}

	static std::string getRandomOrderPhoneNumber()
	{
		return orderPhoneTest[std::rand() % orderPhoneTest.size()];
	}

	static std::string getRandomBookAuthor()
	{
		return bookAuthorTest[std::rand() % bookAuthorTest.size()];
	}

	static std::string getRandomPublisher()
	{
		return bookPublisherTest[std::rand() % bookPublisherTest.size()];
	}

	static int getRandomYearOfPublishing()
	{
		int rnd = std::rand() % 2019;

		while (rnd < 1900 || rnd > 2018)
		{
				rnd = std::rand() % 2019;
		}

		return rnd;
	}

	static int getRandomNumberOfPages()
	{
		return (std::rand() % 3000);
	}

	static bool getRandomIsNew()
	{
		return (std::rand() % 2 == 0);
	}
private:
	static std::vector<std::string> languageTest;
	static std::vector<std::string> ageRequirementTest;
	static std::vector<std::string> genresTest;
	static std::vector<std::string> orderSurnameTest;
	static std::vector<std::string> orderEmailTest;
	static std::vector<std::string> orderPhoneTest;
	static std::vector<std::string> bookAuthorTest;
	static std::vector<std::string> bookPublisherTest;
	static std::vector<std::string> bookName1Test;
	static std::vector<std::string> bookName2Test;
	static std::vector<std::string> bookName3Test;
};

std::vector<std::string> TestConstants::bookName1Test = { "Синий"
														, "Голубой"
														, "Желтый"
														, "Оранжевый"
														, "Зеленый"
														, "Малиновый"
														, "Красный"
														, "Коричневый"
														, "Серый"
														, "Черный"
														, "Белый"
														, "Лучший"
														, "Восхитительный"
														, "Улыбающийся"
														, "Заводной"
														, "Умный"
														, "Странный"
														, "Пушистый"
														, "Саркастичный"
														, "Начитанный"
														, "Серебряный"
														, "Оловянный"
														, "Стеклянный"
														, "Деревянный"
														};

std::vector<std::string> TestConstants::bookName2Test = { "Апельсин"
														, "Соловей"
														, "Учебник"
														, "Ворон"
														, "Дракон"
														, "Разговор"
														, "Выбор"
														, "Телефон"
														, "Бокал"
														, "Будильник"
														, "Дом"
														, "Пододеяльник"
														, "Домен"
														, "Символ"
														, "Металл"
														};

std::vector<std::string> TestConstants::bookName3Test = { "Удивляется"
														, "Путешествует"
														, "в Прострации"
														, "Пишет Манускрипт"
														, "Разрабатывает"
														, "Тренируется"
														, "Любит Поесть"
														, "Колдует над Лабораторной"
														, "Участвует в Ялтинской Конференции"
														, "Танцует с Бубном"
														, "Сверлит в Пять Утра в Воскресенье"
														, "Залипает в Телефоне"
														, "Открывает Киндер-Сюрприз"
														, "Ищет Ресторан \"Смысл Жизни\""
														};

std::vector<std::string> TestConstants::bookPublisherTest =  { "Эксмо"
															 , "Просвещение"
															 , "Рейли"
															 , "Астер"
															 , "Мнемозина"
															 , "Самокат"
															 , "Орион"
															 , "Платон"
															 };

std::vector<std::string> TestConstants::orderSurnameTest =  { "Алексеев"
															, "Волков"
															, "Гладышева"
															, "Демидова"
															, "Кадомцев"
															, "Козленкова"
															, "Машкина"
															, "Путилов"
															, "Росличенко"
															, "Степанова"
															, "Фартушнова"
															, "Худошин"
															, "Шапкина"
															, "Швец"
															};

std::vector<std::string> TestConstants::orderEmailTest = { "1@mail.org"
														 , "2@mail.org"
														 , "3@mail.org"
														 , "4@mail.org"
														 , "5@mail.org"
														 , "6@mail.org"
														 , "7@mail.org"
														 , "8@mail.org"
														 , "9@mail.org"
														 , "bookbookhowtobookbook@book.book"
														 };

std::vector<std::string> TestConstants::orderPhoneTest =  { "+79999999999"
														  , "+79998888888"
														  , "+79997777777"
														  , "+79996666666"
														  , "+79995555555"
														  , "+79994444444"
														  , "+79993333333"
														  , "+79992222222"
														  , "+79991111111"
														  , "+79990000000"
														  , "+79876543210"
														  };

std::vector<std::string> TestConstants::bookAuthorTest =  { "Джек Лондон"
														  , "Валентина Осеева"
														  , "Кентаро Миура"
														  , "Михаил Лермонтов"
														  , "Лев Толстой"
														  , "Джордж Оруэлл"
														  , "Федор Достоевский"
														  , "Ян Перельман"
														  , "Урсула ле Гуин"
														  , "Валентин Катаев"
														  , "Агата Кристи"
														  , "Габриэль Гарсиа Маркес"
														  , "Андре Моруа"
														  , "Марк Твен"
														  , "Александр Пушкин"
														  };

std::vector<std::string> TestConstants::ageRequirementTest = {AGE_0, AGE_6, AGE_12, AGE_16, AGE_18};

std::vector<std::string> TestConstants::languageTest = {RUSSIAN, ENGLISH, FRENCH, ITALIAN, DEUTCH, JAPANESE, CHINESE};

std::vector<std::string> TestConstants::genresTest = { FANTASY
													 , POP_SCIENCE
													 , DETECTIVE
													 , POETRY
													 , CLASSIC
													 , DRAMATURGY
													 , HISTORY
													 , ADVENTURES
													 , HUMOR
													 , COOKING
													 , HOBBIES
													 , IT
													 , CHILD
													 , SCIENCE
													 , SCHOOLBOOK
													 , BUSINESS
													 , COMICS };