#include<iostream>
#include<string>
#include<iomanip>
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

// THE BEGINNING OF HANGMAN

int endGame()
{
	exit(0);
	return 0;
}

string randomWordPicker(string word[])
{
	srand(time(NULL));
	return word[rand() % 7];
}

void hangStructure(int counter)
{
	if (counter == 0)
	{
		cout << "";
	}

	if (counter == 1)
	{
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 2)
	{
		cout << setw(16) << " _______________\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 3)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 4)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 5)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 6)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(17) << "/|\n";
		cout << "|" << setw(17) << "/ |\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}

	else if (counter == 7)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(16) << "/|" << "\\" << "\n";
		cout << "|" << setw(19) << "/ | \\\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|\n";
		cout << "|\n";
		cout << "|\n";
	}


	else if (counter == 8)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(16) << "/|" << "\\" << "\n";
		cout << "|" << setw(19) << "/ | \\\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(16) << "/\n";
		cout << "|" << setw(15) << "/\n";
		cout << "|\n";
	}

	else if (counter == 9)
	{
		cout << setw(16) << " _______________\n";
		cout << "|" << setw(18) << " | \n";
		cout << "|" << setw(18) << "( )\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(16) << "/|" << "\\" << "\n";
		cout << "|" << setw(19) << "/ | \\\n";
		cout << "|" << setw(17) << "|\n";
		cout << "|" << setw(15) << "/" << setw(2) << "\\" << "\n";
		cout << "|" << setw(14) << "/" << setw(4) << "\\" << "\n";
		cout << "|" << "\n";

		system("cls");

		cout << "You are dead my frined!" << endl;
		endGame();
	}
}

void hangPlay(int start_point, int end_point)
{
	string hangmanWords[] = { "apple", "firefighter", "policeman", "chess", "hangman", "worldwide", "diller" };

	string random_word = randomWordPicker(hangmanWords); // random word from the string
	string hold_word = random_word;  // holds the word and makes it into "_"

	 //All of the counters

	int true_guess = 0;
	int false_guess = 0;

	int sum = 0;

	int flag = 0;


	//The end of the counters


	for (size_t i = start_point; i < (random_word.size() - end_point); i++)
	{
		hold_word[i] = '_';
	}

	for (size_t i = 0; i < random_word.size(); i++)
	{
		cout << " " << hold_word[i];
	}


	while ((true_guess + start_point + end_point) != random_word.size())
	{

		char userChoice;
		cout << "\n";
		cout << "Enter your choice, please: ";
		cin >> userChoice;

		system("cls");

		if (((userChoice >= 'a' && userChoice <= 'z') || (userChoice >= 'A' && userChoice <= 'Z')))
		{
			for (size_t i = start_point; i < random_word.size() - end_point; i++)
			{
				if ((userChoice == random_word[i]) && (hold_word[i] == '_'))
				{
					hold_word[i] = userChoice;

					true_guess++;

					sum += true_guess;
				}
			}

			if (true_guess == 0)
			{
				false_guess++;
			}

			hangStructure(false_guess);

			for (size_t i = 0; i < random_word.size(); i++)
			{
				cout << " " << hold_word[i];
			}

		}
		else {
			cout << "\n\nInvalid try! You must enter a valid sysmbol!\n";
		}

		true_guess = 0;

		for (size_t i = 0; i < random_word.size(); i++)
		{
			if (hold_word[i] == '_')
			{
				flag++;
			}
		}

		if (flag == 0)
		{
			goto bottom;
		}
		flag = 0;
	}
bottom:

	system("cls");

	cout << "\n Congrats! You won the game! " << endl;
	endGame();
}

void hangMenu()
{
	cout << "(1) Hard mode (No joker)" << endl;
	cout << "(2) Medium mode (One jokers)" << endl;
	cout << "(3) Easy mode (Two jokers)" << endl;

	string menuChoice;

	cout << " \n Enter you choice --> ";
	getline(cin, menuChoice);

	system("cls");

	if (stoi(menuChoice) == 1)
	{
		hangPlay(0, 0);
	}
	else if (stoi(menuChoice) == 2)
	{
		hangPlay(0, 1);
	}
	else if (stoi(menuChoice) == 3)
	{
		hangPlay(1, 1);
	}
}
// THE END OF HANGMAN

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
		hangMenu();
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