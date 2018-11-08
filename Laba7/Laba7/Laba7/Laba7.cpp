
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


//8.
//а) за номером року видає його назву за старояпонським календарем;
//б) за назвою місяця видає знак Зодіаку.
string GetZod(int year);
string GetZod(string nameOfMonth);
void main()
{
	int year;
	string nameOfMonth;
	printf("Enter a month\t");
	cin >> nameOfMonth;
	cout << "Your zodiak is " + GetZod(nameOfMonth) + "\n";
	printf("Enter a year\t");
	cin >> year;
	cout << "It's a year of " + GetZod(year) + "\n";

}

string  GetZod(string nameOfMonth)
{

	string months[12] = { "January","February","May","April","May","Juny","July","August","September","October","November","December" };
	string zodiakValues[12] = { "Capricorn","Aquarius","Pisces","Aries","Taurus","Gemini","Cancer","Leo","Virgo","Libra","Scorpio","Saggitarius" };
	for (int i = 0; i < 12; i++)
	{
		if (months[i] == nameOfMonth)
		{
			return zodiakValues[i];
		}

	}

}
string GetZod(int year)
{

	int a = year % 12;
	string japanYear[12] = { "rat","cow","tiger","hare","dragon","snake","horse","sheep","monkeys","hens","dogs","pigs" };
	return japanYear[a];
}
