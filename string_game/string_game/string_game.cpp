#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>

#include "AppMenu.h"
#include "GetNumbers.h"
#include "GetMonth.h"
#include "Quiz.h"
#include "HangPlay.h"

using namespace std;

string choiceMode;
string str;

int endGame()
{
	exit(0);
	return 0;
}

// The beginning of the clock fucntions
void getNumbers()
{
clock_again1:
	cout << "Enter hours, minutes and seconds, every on a new line: ";
	cin >> hours >> mins >> sec;

	cout << endl << "Enter days and years, every ona  new line: ";
	cin >> days >> years;

	if ((hours >= 0 && hours <= 24) && (mins >= 0 && mins <= 60) && (sec >= 0 && sec <= 60) && (mins >= 0 && mins <= 60) && ((days <= 30 && days >= 1) ||
		(days <= 31 && days >= 1)) && (years >= 0 && years <= 2021))
	{

	}
	else {
		cout << "Please, type correctly!" << endl;

		system("pause");
		system("cls");

		goto clock_again1;
	}
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
clock_again:
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
clock_again:

	getMonth();
	if (month == "January" || month == "February" || month == "March" || month == "April" || month == "May" || month == "June" || month == "July"
		|| month == "August" || month == "September" || month == "October" || month == "November" || month == "December")
	{

		cout << endl << endl;
		getNumbers();

		while (1)
		{
			system("cls");
			cout << "    \\ ( ) /	            _______                  ______        _______                       \\ ( ) /" << endl;
			cout << "     \\ | /	          //       \\\\ ||           //      \\\\    //       \\\\  ||   //             \\ | /" << endl;
			cout << "      \\|/		 ||           ||          ||        ||  ||            ||  //               \\|/" << endl;
			cout << "       |	         ||           ||          ||        ||  ||            || //                 |" << endl;
			cout << "       |	         ||           ||          ||        ||  ||            || \\\\                 |" << endl;
			cout << "      / \\	         ||           ||          ||        ||  ||            ||  \\\\               / \\" << endl;
			cout << "     /   \\	  	  \\\\_______// ||________   \\\\______//    \\\\_______//  ||   \\\\             /   \\" << endl;
			cout << "    /     \\	                                                                                 /     \\" << endl;
			cout << "   /       \\	                                                                                /       \\" << endl;
			cout << "                " << hours << ":" << mins << ":" << sec << endl;
			cout << "                " << days << " " << month << " " << years << endl;

			Sleep(1000);
			system("cls");

			sec++;
			clockCheck();

			cout << "       ( )                  _______                  ______        _______                        ( )  " << endl;
			cout << "        |  	          //       \\\\ ||           //      \\\\    //       \\\\  ||   //              | " << endl;
			cout << "       /|\\		 ||           ||          ||        ||  ||            ||  //              /|\\" << endl;
			cout << "      / | \\              ||           ||          ||        ||  ||            || //              / | \\" << endl;
			cout << "     /  |  \\             ||           ||          ||        ||  ||            || \\\\             /  |  \\" << endl;
			cout << "       / \\	         ||           ||          ||        ||  ||            ||  \\\\              / \\" << endl;
			cout << "      /   \\	  	  \\\\_______// ||________   \\\\______//    \\\\_______//  ||   \\\\            /   \\" << endl;
			cout << "     /     \\	                                                                                /     \\" << endl;
			cout << "    /       \\	                                                                               /       \\" << endl;
			cout << "                " << hours << ":" << mins << ":" << sec << endl;
			cout << "                " << days << " " << month << " " << years << endl;

			Sleep(1000);
			system("cls");

			sec++;
			clockCheck();
		}
	}
	else {
		system("cls");

		cout << "Please, type correctly!" << endl;

		system("pause");
		system("cls");

		goto clock_again;
	}
} // clockPlay
// The end of the clock functions

// THE BEGINNING OF HANGMAN

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

		system("pause");
		system("cls");

	hang_again:
		cout << "  Go to menu (1)" << endl;
		cout << "  Exit game  (2)" << endl;

		cout << "\n     Enter your choice: --> ";

		string go_back_1; // Do it with char
		getline(cin, go_back_1);

		if (go_back_1 == "1")
		{
			system("cls");
			hangMenu();
		}

		else if (go_back_1 == "2")
		{
			system("cls");
			endGame();
		}

		else if (go_back_1 != "1" && go_back_1 != "2")
		{
			system("cls");

			cout << "Invalid try! 1111" << endl;

			system("pause");
			system("cls");

			goto hang_again;
		}
	}
}

void hangPlay(int start_point, int end_point)
{
	string hangmanWords[] = { "apple", "firefighter", "policeman", "chess", "hangman", "worldwide", "dealer" };

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

again2:
	cout << "        //       //    /////////    ///     //      //////         ///      ///         /////////   ////      //\n";
	cout << "       //       //    //     //    // //    //    ///             // //    /////       //     //   // //     //\n";
	cout << "      //       //    //     //    //  //   //   //               //  //   //  //      //     //   //   //   //\n";
	cout << "     ///////////    /////////    //   //  //   //      /////    //   //  //   //     /////////   //    //  //\n";
	cout << "    //       //    //     //    //    // //   //         //    //    /////    //    //     //   //     // //\n";
	cout << "   //       //    //     //    //     ////     ///      //    //              //   //     //   //      //// \n";
	cout << "  //       //    //     //    //      ///         ////////   //              //   //     //   //       ////\n\n\n";
	cout << "(1) Hard mode (No joker)" << endl;
	cout << "(2) Medium mode (One jokers)" << endl;
	cout << "(3) Easy mode (Two jokers)" << endl;

	string menuChoice;

	cout << " \n Enter you choice --> ";
	getline(cin, menuChoice);

	system("cls");

	if (menuChoice == "1")
	{
		hangPlay(0, 0);
	}
	else if (menuChoice == "2")
	{
		hangPlay(0, 1);
	}
	else if (menuChoice == "3")
	{
		hangPlay(1, 1);
	}
	else if (menuChoice != "1" && menuChoice != "2" && menuChoice != "3")
	{
		cout << "Invalid try!" << endl;

		system("pause");
		system("cls");

		goto again2;
	}
}
// THE END OF HANGMAN

// The beginning of the string quiz
void easyQuiz()
{
again:
	string sth;

	cout << "What is the string method that we use, when we want to delete something? " << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "erase" || sth == ".erase")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""erase""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "What method do we use when we want to insert sth in the string? " << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "insert" || sth == ".insert")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""insert""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "How many bits is short int?" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "2")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""2""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "How many bits is char" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "1")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""1""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "How many bits is unsigned long long int" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "8")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""8""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "Your points are " << c << " out of 5!" << endl;

	total_easy = c;
	c = 0;

	system("pause");
	system("cls");

	cout << "Play again (1)" << endl;
	cout << "Go back to quiz menu (2)" << endl;
	cout << "Exit (3)" << endl;

	string sth1;
	cout << "\n Enter your choice --> "; getline(cin, sth1);
	system("cls");

	if (stoi(sth1) == 1)
	{
		goto again;
	}
	else if (stoi(sth1) == 2)
	{
		menuQuiz();
	}
	else if (stoi(sth1) == 3)
	{
		endGame();
	}
}

void hardQuiz()
{
again1:
	string sth;

	cout << "int a = 19, b = 18; \ncout << (a|b); \nWhat will be the outup of the code?" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "19")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""19""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "What will be the decimal number of 11010101? " << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "213")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""213""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "What will be the binary number of 222(hex)?" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "10 0010 0010")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""10 0010 0010""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "int a = 12, b = 25; \ncout << (a&b) \nWhat will be the outup of the code?;" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "8")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""8""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "int a = 12, b = 25; \ncout << (a^b); \nWhat will be the outup of the code?" << endl;
	cout << "\n Enter your answer here: ";  getline(cin, sth);

	if (sth == "21")
	{
		cout << "\n   Your answer is correct!" << endl;
		c++;
	}
	else {
		cout << "\n   Your answer is incorrect! The right answer is ""21""." << endl;
	}

	sth = "";

	Sleep(2000);
	system("cls");

	cout << "Your points are " << c << " out of 5!" << endl;

	c = 0;

	Sleep(3250);
	system("cls");

	cout << "Play again (1)" << endl;
	cout << "Go back to quiz menu (2)" << endl;
	cout << "Exit (3)" << endl;

	string sth1;
	cout << "\n Enter your choice --> "; getline(cin, sth1);
	system("cls");

	if (stoi(sth1) == 1)
	{
		goto again1;
	}
	else if (stoi(sth1) == 2)
	{
		menuQuiz();
	}
	else if (stoi(sth1) == 3)
	{
		endGame();
	}
}

void menuQuiz()
{
menu:
	cout << "                     _______                                 ___________\n";
	cout << "		   //       \\\\      ||         ||      ||               //\n";
	cout << "		  ||         ||     ||         ||                     //  \n";
	cout << "		  ||         ||     ||         ||      ||           //    \n";
	cout << "		  ||         ||     ||         ||      ||         //      \n";
	cout << "		  ||         ||     ||         ||      ||       //        \n";
	cout << "		   \\\\_______//\\\\    ||         ||      ||     //          \n";
	cout << "		               \\\\    \\\\_______//       ||   //____________\n\n";
	cout << "\n";
	cout << "				      (1) Easy mode" << endl;
	cout << "				      (2) Hard mode" << endl;
	cout << "				      (3) Guide" << endl;

	string quizChoice;
	cout << "\n Enter your choice --> ";  getline(cin, quizChoice);

	system("cls");

	if (quizChoice == "1")
	{
		easyQuiz();
	}
	else if (quizChoice == "2")
	{
		if (total_easy > 3)
		{
			hardQuiz();
		}
		else {
			cout << "You have to have at least 4 points to continue to this quiz!" << endl;
			Sleep(2000);
			system("cls");
			goto menu;
		}
	}
	else if (quizChoice == "3")
	{
		system("cls");

		cout << "You won't be able to continue to the second quiz if you don't have at least 4 point of 5 on the first one!" << endl;

		Sleep(5000);
		system("cls");

		goto menu;
	}
	else if (quizChoice != "1" && quizChoice != "2" && quizChoice != "3")
	{
		quizChoice = "";
		cout << "Invalid try!" << endl;

		system("pause");
		system("cls");

		goto menu;
	}

	quizChoice = "";
}
// The end of the string quiz

void chooseMode()
{
	cout << "  (1) >> Quiz about strings ^_^ :" << endl;
	cout << "  (2) >> Manual Clock () :P     :" << endl;
	cout << "  (3) >> Hangman :)             :" << endl << "................................:" << endl;
	cout << "  (4) >> UserGuide <>           |" << endl;
	cout << "---------------------------------" << endl;

	cout << "\n Enter your choice --> "; getline(cin, choiceMode);

	system("cls");

} // chooseMode

void userGuide()
{
	cout << "You have 3 modes, just choose one of them and start playing!" << endl;
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
appmenu:
	chooseMode();


	if (choiceMode == "1")
	{
		menuQuiz();
	}
	else if (choiceMode == "2")
	{
		clockPlay();
	}
	else if (choiceMode == "3")
	{
		hangMenu();
	}
	else if (choiceMode == "4")
	{
		userGuide();
	}
	else if (choiceMode != "1" && choiceMode != "2" && choiceMode != "3" && choiceMode != "4")
	{
		choiceMode == "";
		cout << "Invalid try!" << endl;

		system("pause");
		system("cls");

		goto appmenu;
	}
} //appMenu

int main()
{
	appMenu();
}