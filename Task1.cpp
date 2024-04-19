//#include<iostream>
//#include<cstdlib>
//#include<windows.h>
//using namespace std;
//
//#define ANSI_COLOR_YELLOW  "\x1b[33m"
//#define ANSI_COLOR_MAGENTA "\x1b[35m"
//#define ANSI_COLOR_CYAN    "\x1b[36m"
//
//
//int main()
//{
//	int random_Number;
//	int guess;
//	char choice;
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//	//Beacuse we are adding code for the colour, the iomanip library might not work. For me it was not working for you it might work so im adding the spaces without using setw.  
//	cout << ANSI_COLOR_MAGENTA << "                                       -------------------------------------------" << endl; //39
//	cout <<                       "                                      |      WELCOME TO NUMBER GUESSING GAME       |" << endl; //38
//	cout <<                       "                                      |         ENTER ANY KEY TO CONTINUE          | " << endl;
//	cout <<                       "                                       -------------------------------------------" << ANSI_COLOR_MAGENTA << endl;
//	cin >> choice;
//
//	system("cls");
//
//	srand(time(0));
//	random_Number = rand() % 100 + 1;
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//	cout << ANSI_COLOR_CYAN << "                                                        Enter your guess" << endl; //57
//	cout << "                                                        -----------------" << endl; //56
//	cin >> guess;
//
//
//	while (guess != random_Number)
//	{
//		if (guess > random_Number)
//		{
//			cout << endl;
//			cout << endl;
//			cout << endl;
//			cout << endl;
//
//			cout  << ANSI_COLOR_CYAN << "                                                  Guess is Too High. Guess a lower number" << endl; //50
//			cout << "                                                  ---------------------------------------" << endl; //50
//		}
//		else
//		{
//			cout << endl;
//			cout << endl;
//			cout << endl;
//			cout << endl;
//
//			cout << ANSI_COLOR_CYAN << "                                                   Guess is Too Low. Guess a higher number" << endl; //52
//			cout << "                                                   ---------------------------------------" << endl; //51
//		}
//
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//		cout << endl;
//
//		cin >> guess;
//	}
//
//	system("cls");
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//	cout << ANSI_COLOR_YELLOW << "                                               ---------------------------------------------------------" << endl; //47
//	cout << "                                              |     Congragulations! Your guess is correct YOU WON!!   | "      << endl; //46
//	cout << "                                               ---------------------------------------------------------" << ANSI_COLOR_YELLOW << endl; //47
//
//	system("pause");
//	return 0;
//}