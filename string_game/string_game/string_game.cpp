#include<iostream>
#include<string>
#include<windows.h>

#include "AppMenu.h"
#include "GetNumbers.h"
#include "GetMonth.h"

using namespace std;

string choiceMode;
string str;

// The beginning of the clock fucntions
void getNumbers()
{
	cout << "Enter hours, minutes and seconds, every on a new line: ";
	cin >> hours >> mins >> sec;

	cout << endl << "Enter days and years, every ona  new line: ";
	cin >> days >> years;
} // getNumbers

string month;

void getMonth()
{
	cout << "Enter a month: ";
	getline(cin, month);
} // getMonth

//Basic check that the clock does
void clockCheck()
{
	if (sec > 59)
	{
		sec = 0;
		mins++;
	}
	if (mins > 59)
	{
		mins = 0;
		hours++;
	}
	if (hours > 23)
	{
		hours = 0;
		days++;
	}
	if (month == "January")
	{
		if (days == 32)
		{
			days = 1;
			month = "February";
		}
	}
	if (month == "February")
	{
		if (years % 4 == 0)
		{
			if (days == 30)
			{
				month = "March";
				days = 1;
			}
		}
		else
		{
			if (days == 29)
			{
				month = "March";
				days = 1;
			}
		}
	}
	if (month == "March")
	{
		if (days == 32)
		{
			days = 1;
			month = "April";
		}
	}
	if (month == "April")
	{
		if (days == 31)
		{
			days = 1;
			month = "May";
		}
	}
	if (month == "May")
	{
		if (days == 32)
		{
			days = 1;
			month = "June";
		}
	}
	if (month == "June")
	{
		if (days == 31)
		{
			days = 1;
			month = "July";
		}
	}
	if (month == "July")
	{
		if (days == 32)
		{
			days = 1;
			month = "August";
		}
	}
	if (month == "August")
	{
		if (days == 32)
		{
			days = 1;
			month = "September";
		}
	}
	if (month == "September")
	{
		if (days == 31)
		{
			days = 1;
			month = "October";
		}
	}
	if (month == "October")
	{
		if (days == 32)
		{
			days = 1;
			month = "November";
		}
	}
	if (month == "November")
	{
		if (days == 31)
		{
			days = 1;
			month = "December";
		}
	}
	if (month == "December" && days == 32)
	{
		years++;
		days = 1;
		month = "January";
	}
} // clockCheck

void clockPlay()
{
	getMonth();
	system("cls");
	getNumbers();

	while (1)
	{
		system("cls");
		cout << hours << ":" << mins << ":" << sec << endl;
		cout << days << " ";
		cout << month << " ";
		cout << years;
		Sleep(1000);
		sec++;

		clockCheck();
	}
} // clockPlay
// The end of the clock functions

void chooseMode()
{
	cout << "  (1) >> Quiz about strings ^_^ :" << endl;
	cout << "  (2) >> Manual Clock () :P     :" << endl;
	cout << "  (3) >> Hangman :)             :" << endl << "................................:" << endl;
	cout << "  (4) >> UserGuide <>           |" << endl;
	cout << "---------------------------------" << endl;

	getline(cin, choiceMode);

	system("cls");

} // chooseMode

void userGuide()
{
	cout << "You have 4 modes, just choose one of them and start playing!" << endl;
	cout << "We will add new mode soon! \n \n";

	string go_back;

	cout << "Type \"quit\" to go back to the menu: ";
	getline(cin, go_back);

	if (go_back == "quit") {
		system("cls");
		appMenu();
	}

} // userGuide

void appMenu()
{
	chooseMode();

	int modeChoosed = stoi(choiceMode);

	if (modeChoosed == 1)
	{
	}
	else if (modeChoosed == 2)
	{
		clockPlay();
	}
	else if (modeChoosed == 3)
	{

	}
	else if (modeChoosed == 4)
	{
		userGuide();
	}

} // appMenu

int main()
{
	appMenu();
}