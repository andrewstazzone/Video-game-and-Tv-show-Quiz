//quiz where you choose outta 3 options. \\Reminder you put any variable in function 
//and must return the same data type that you enter in the function parameters in intmain
#include<Windows.h>
#include<mmsystem.h>
#include<iostream>
#include<string> 
#include<chrono>
#include<time.h>
#include<thread>
#pragma comment(lib,"winmm.lib")
#include<cwchar>
using namespace std;
void instructions();
void Welcome(string);// you put the varaible you want the function to be in 
//string x, so n1 (name) goes in the x. 
void menu1();
void menu1a();// videogames
void menu1c();// tv shows
void bl2(); //Confirmation to see if they want thos category
void bl2quiz(); // the actual quiz
void Sponge();
void Spongequiz();
void mk();
void mkquiz();
void GOW();
void GOWQUIZ();
int GAMEOVER();
float streak2(float);
float streak6(float);
float streak10(float);
float streak16(float);
int main()
{
	instructions(); cout << endl; string n1;

	cout << "Please enter your username\n"; getline(cin, n1);  cout << endl;


	system("cls"); cout << endl;
	Welcome(n1);
	menu1();


	return 0;
}
void instructions()
{
	cout << "INSTRUCTIONS:\n" << "1a. When entering your answer, type in the answer SPELT CORRECTLY and click 'enter' to see if your answer is correct or not.\n";
	cout << "1b. For multiple choice, just enter the letter your answer is in." << endl;
	cout << "2. You will be given two topics and get to choose the certain topic you will like to be tested on followed by  additional  choices\n" << "regarding that topic you chose." << endl;
	cout << "3a. The format of the questions will vary, and each one correct will earn you with points (some worth more than others)." << endl;
	cout << "3b. With every question wrong, you will not earn any points from that question to your score.\n";
	cout << "4. Be carful, their will be some wild card questions such as: wager points, bonus questions, and some that will CLEAN SLATE YOUR SCORE." << endl;
	cout << "5. In the end, you will recieve your final score, GOODLUCK!!!" << endl;

}
void Welcome(string n1)
{

	cout << "Welcome ";
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 18);
	cout << n1;
	SetConsoleTextAttribute(h, 7);
	cout << "!! ";
}
void menu1() // user needs to choose first category
{
	string x, y;
	cout << "Please type in the number of the category you would like to be tested on (example type 2 for tv shows):\n";
	cout << "	    -----------			" << "		     --------				" << endl;
	cout << "	(1) VIDEO GAMES					" << " (2) TV SHOWS				" << endl;
	cout << "	    -----------					" << "     --------				" << endl;
	getline(cin, x); cout << endl;
	system("cls"); cout << endl;
	if (x == "VIDEO GAMES" || x == "video games" || x == "Video Games" || x == "videogames" || x == "1" || x == "(1)")
	{
		menu1a();

	}

	else if (x == "tv shows" || x == "TV SHOWS" || x == "Tv Shows" || x == "TVSHOWS" || x == "tvshows" || x == "2" || x == "(2)")
	{
		menu1c();
	}
	while ((x != "VIDEO GAMES" || x != "video games" || x != "Video Games" || x != "videogames" || x != "1" || x != "(1)") && (x != "tv shows" || x != "TV SHOWS" || x != "Tv Shows" || x != "TVSHOWS" || x != "tvshows" || x != "3" || x != "(3)") && (x != "MOVIES" || x != "Movies" || x != "movies" || x != "2" || x != "(2)"))
	{
		cout << "Sorry, please retype in the number of the category you would like to be tested on (example type 2 for movies):\n";
		cout << "	    -----------								" << "     --------				" << endl;
		cout << "	(1) VIDEO GAMES								" << " (2) TV SHOWS				" << endl;
		cout << "	    -----------								" << "     --------				" << endl;
		getline(cin, x); cout << endl;
		system("cls"); cout << endl;
		if (x == "VIDEO GAMES" || x == "video games" || x == "Video Games" || x == "videogames" || x == "1" || x == "(1)")
		{
			menu1a();

		}

		else if (x == "tv shows" || x == "TV SHOWS" || x == "Tv Shows" || x == "TVSHOWS" || x == "tvshows" || x == "2" || x == "(2)")
		{
			menu1c();
		}
	}

}
void menu1a() // a- user chooses video games, now needs to choose second category
{
	string y;
	cout << "Please type in the category you would like to be tested on (to go back enter BACK):\n";
	cout << "	    -------------		" << "	    -----------------------					" << "   --------------------				" << endl;
	cout << "	(1) BORDERLANDS 2		" << "	(2) MORTAL KOMBAT FRANCHISE					" << "(3) GOD OF WAR FRANCHISE				" << endl;
	cout << "	    -------------		" << "	    -----------------------					" << "   --------------------				" << endl;
	getline(cin, y); cout << endl;
	system("cls"); cout << endl;
	if (y == "borderlands 2" || y == "BORDERLANDS 2" || y == "Borderalnds 2" || y == "1" || y == "(1)")
	{
		bl2();
	}
	else if (y == "mortal kombat franchise" || y == " MORTAL KOMBAT FRANCHISE" || y == "Mortal Kombat Franchise" || y == "mortal kombat" || y == "MORTAL KOMBAT" || y == "Mortal Kombat" || y == "(2)" || y == "2")
	{
		mk();
	}
	else if (y == "GOD OF WAR FRANCHISE" || y == "god of war franchise" || y == "God of War Franchise" || y == "God of war" || y == "GOD OF WAR" || y == "god of war" || y == "3" || y == "(3)")
	{
		GOW();
	}
	else if (y == "back" || y == "Back" || y == "BACK")
	{
		menu1();
	}
}

void menu1c()
{
	string y;
	cout << "Please type in the category you would like to be tested on (to go back enter BACK):\n";
	cout << "	   ----------------------	"; cout << endl;
	cout << "	(1) SPONGEBOB SQUAREPANTS	"; cout << endl;
	cout << "	   ----------------------	"; cout << endl;
	getline(cin, y); cout << endl;
	system("cls"); cout << endl;
	if (y == "SPONGEBOB SQUAREPANTS" || y == "Spongebob Squarepants" || y == "spongebob squarepants" || y == "SPONGEBOBSQUAREPANTS" || y == "sponge" || y == "1" || y == "(1)")
	{
		Sponge();
	}

	else if (y == "back" || y == "Back" || y == "BACK")
	{
		menu1();
	}
}
void bl2()
{
	string z;// confirmation the user wants this category.
	cout << " You chose BORDERLANDS 2, are you ready to be tested? If so type in YES, if not, enter NO and you will be able to choose another option.\n";
	getline(cin, z); cout << endl;
	system("cls"); cout << endl;
	if (z == "Yes" || z == "YES" || z == "yes" || z == "YEA" || z == "yea" || z == "Yea" || z == "Y" || z == "y")
	{
		cout << "WE WILL NOW START THE QUIZ!!\n" << endl;
		bl2quiz();
		//function goes here bl2quiz goes here
	}
	else if (z == "no" || z == "NO" || z == "No" || z == "nah" || z == "Nah" || z == "NAH" || z == "n" || z == "N")
	{
		menu1a(); cout << endl;
	}
}
void bl2quiz()
{
	float  SCORE1, SCORE2, SCORE3, SCORE4a, SCORE5, SCORE6a, SCORE6B, SCORE6C, SCORE7, SCORE8, CURRENTSCORE, WAGER, SCORE9, SCORE10, CURRRENTSCORE2, SCORE11, SCORE12, SCORE13, SCORE14, SCORE15, SCORE16, SCORE17, SCORE18, SCORE19, SCORE20, FINALSCORE, STREAK, BACKMENU;
	float SCORE4b;
	STREAK = 0;
	string Q1, Q3, Q4a, Q4b, Q5, Q7, Q12, Q13, Q15, Q16, Q20;
	char  Q2, Q10, Q11, Q14, Q17, Q18, Q19;
	int Q8A, Q8B, Q8C, Q8D;
	cout << " Question 1 (5 points). Which of the four vault hunters is considered the 'Gunzerker'?" << endl;
	cout << " (A) Zero		(B) Maya		(C) Salvador		(D) Axton" << endl;
	getline(cin >> ws, Q1); cout << endl;
	if (Q1 == "C" || Q1 == "c")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE1 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);

	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points.\n";
		SCORE1 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 2 (5 points). What was Handsome Jack's daughters's name?" << endl;
	cout << " (A) Angel		(B) Tannis		(C) Lilith		(D) Elle" << endl;
	cin >> Q2; cout << endl;
	if (Q2 == 'A' || Q2 == 'a')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE2 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 7);

		if (streak2(STREAK) == 2)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}


	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE2 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 3 (10 points). Name the vault hunter that contains the famous skill 'BORE'\n";
	getline(cin >> ws, Q3); cout << endl;
	if (Q3 == "ZERO" || Q3 == "zero" || Q3 == "Zero" || Q3 == "ZER0" || Q3 == "zer0" || Q3 == "Zer0")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +10 points!!\n";
		SCORE3 = 10.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Streak started!\n" << endl;

		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE3 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	cout << "Question 4 (5 points) TRUE/FALSE. The legendary pistol 'Hornet' is manufactured by Maliwan.\n";
	getline(cin >> ws, Q4a); cout << endl;
	if (Q4a == "False" || Q4a == "false" || Q4a == "FALSE" || Q4a == "f" || Q4a == "F" || Q4a == "NO" || Q4a == "no" || Q4a == "No")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE4a = 5.00;
		STREAK++;

		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Two in a row!!\n";

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "BONUS QUESTION (5 points, will not effect your streak). What company did manufacture the 'Hornet'?\n";
		getline(cin >> ws, Q4b); cout << endl;
		if (Q4b == "DAHL" || Q4b == "dahl" || Q4b == "Dahl")
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 10);
			cout << "BONUS QUESTION CORRECT +5 points!!\n";
			SCORE4b = 5.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}

		else
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 12);
			cout << "BONUS QUESTION WRONG, back to the quiz\n ";
			SCORE4b = 0.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE4a = 0.00; SCORE4b = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << "Question 5 (5 points). What was the name of the final boss, THE _______?\n";
	getline(cin >> ws, Q5); cout << endl;
	if (Q5 == "WARRIOR" || Q5 == "Warrior" || Q5 == "warrior" || Q5 == "THE WARRIOR" || Q5 == "the warrior" || Q5 == "The Warrior")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE5 = 5.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE5 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	struct
	{
		float vn;
		string BAHA;
		string OCEAN;
	} Question6;
	float Q6A;
	string Q6b, Q6c;
	cout << "Question 6 (EACH 3 POINTS, MUST GET ALL CORRECT TO CONTINUE STREAK). a) How many total valut hunters are their? (Example: 1,2,3...)\n";
	while (!(cin >> Q6A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	Question6.vn = Q6A;

	if (Q6A == 6)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6a = 3.00;

	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6a = 0.00;

	}HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;

	cout << "b) Finish this side characters name from the Halloween dlc pack- T.K. ____.\n";
	getline(cin >> ws, Q6b); Question6.BAHA = Q6b;
	if (Q6b == "baha" || Q6b == "BAHA" || Q6b == "Baha")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6B = 3.00;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6B = 0.00;

	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "c) Finish the line: I WANT YOU TO BLOW UP THE _____!!!!\n";
	getline(cin >> ws, Q6c); Question6.OCEAN = Q6c;
	if (Q6c == "ocean" || Q6c == "Ocean" || Q6c == "OCEAN")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6C = 3.00;


	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6C = 0.00;

	}

	if (Q6A == 6 && (Q6b == "baha" || Q6b == "BAHA" || Q6b == "Baha") && (Q6c == "ocean" || Q6c == "Ocean" || Q6c == "OCEAN"))
	{
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got all them right and a streak going!" << endl;

		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "WHIFF MY HUMAN GASS U GOT 6 INA ROW!!" << endl;

		}
	}
	else
	{
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 7 (6 points). Who is reffered to as the 'Slab King'?\n";
	getline(cin >> ws, Q7);
	if (Q7 == "brick" || Q7 == "Brick" || Q7 == "BRICK")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +6 points!!\n";
		SCORE7 = 6.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE7 = 0.00;
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "Question 8 (5 points each, MUST GET ALL CORRECT TO CONTINUE STREAK)." << endl << " Put these main DLC's in order from first release to last by putting the number associated with that choice.\n";
	cout << " Type the number of your choice and click 'enter', YOU WILL NOT BE ABLE TO CHANGE YOUR ANSWER ONCE IT IS ENTERED SO BE CAREFUL (Example, 1 'enter', 2 'enter'.)\n";
	cout << "Preview:\n" << "1 'enter'\n" << "2 'enter'\n" << "3 'enter'\n" << "4 'enter'\n";
	cout << "(1). Mr. Torgue's Campaign of Carnage.\n" << "(2). Tiny Tina'a Assault on Dragon Keep\n" << "(3).Captain Scarlet and Her Pirate Booty.\n" << "(4). Sir Hammerlocks's Big Game Hunt\n";
	while (!(cin >> Q8A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8B))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8C))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8D))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}

	if (Q8A == 3 && Q8B == 1 && Q8C == 4 && Q8D == 2)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "YOU GOT ALL CORRECT!! +20 points\n";
		SCORE8 = 20.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
	}
	else if ((Q8A != 3 && Q8B == 1 && Q8C == 4 && Q8D == 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D == 2) || (Q8A == 3 && Q8B == 1 && Q8C != 4 && Q8D == 2) || (Q8A == 3 && Q8B == 1 && Q8C == 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "THREE OUTTA FOUR CORRECT +15 points!!\n";
		SCORE8 = 15.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C == 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C != 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C != 4 && Q8D == 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B == 1 && Q8C != 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY HALF RIGHT +10 points!!\n";
		SCORE8 = 10.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C != 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C != 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C != 4 && Q8D != 2) || (Q8A != 3 && Q8B != 1 && Q8C == 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY ONE RIGHT 5 points!!\n";
		SCORE8 = 5.00;
		STREAK = 0.00;
	}
	else if (Q8A != 3 && Q8B != 1 && Q8C != 4 && Q8D != 2)
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "ALL WRONG +0 points!!\n";
		SCORE8 = 0.00;
		STREAK = 0.00;
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	CURRENTSCORE = SCORE1 + SCORE2 + SCORE3 + SCORE4a + SCORE4b + SCORE5 + SCORE6a + SCORE6B + SCORE6C + SCORE7 + SCORE8;
	string Q9WAGER;
	cout << "Question 9. WAGER!!! Your cuurent score is " << CURRENTSCORE << "." << endl;
	if (CURRENTSCORE == 0)
	{
		float WAGERCHOICE;
		char Q9;
		cout << "Unfortunatley, you do not have any points to wager, however I will give a choice.\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "Would you like to attempt to answer Question 9 and if answered correctly, you will gain 50 POINTS!!\n";
		cout << "However, if you get it wrong, you will automacially fail the quiz and will be exited out of the quiz\n";
		cout << "If you choose not to do so, you will simply just skip question 9 and proceed with the quiz with ur currentscore\n";
		cout << "Enter 1 to WAGER and 2 to SKIP   "; cout << endl; cin >> WAGERCHOICE;
		system("cls"); cout << endl;
		if (WAGERCHOICE == 1)
		{
			cout << "ALRIGHT, HERE IS QUESTION 9. What is the enemy 'Gettle' dedciated legendary drop?\n";
			cout << "A. UNKEMPT HAROLD	B. LYUDA	C. VERUC	D. FAST BALL	E. NONE OF THE ABOVE\n";
			cin >> Q9;
			if (Q9 == 'b' || Q9 == 'B')
			{
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "CORRECT!! NOW YOUR BACK IN THE GAME +50 POINTS!!\n";
				SCORE9 = 50.00;
				STREAK++;
			}

			else
			{

				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "WRONG ";  GAMEOVER(); exit(0);
				SCORE9 = 0.00;
				STREAK = 0;
			}

		}
		else if (WAGERCHOICE == 2)
		{
			cout << "Taking your chances and proceeding with the quiz, on with the rest of the quiz\n";
			SCORE9 = 0.00;
		}


	}

	if (CURRENTSCORE > 1)
	{


		cout << "Please enter the amount you would like to wager (1-" << CURRENTSCORE << ")." << endl;
		cin >> WAGER;

		for (WAGER; WAGER == 0;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER > CURRENTSCORE;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}


		for (WAGER; WAGER > CURRENTSCORE;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER == 0;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}

		cout << "You are wagering "; HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 18);
		cout << WAGER;
		SetConsoleTextAttribute(h, 7); cout << " points." << endl;
		SetConsoleTextAttribute(h, 14); system("pause");
		SetConsoleTextAttribute(h, 7); system("cls"); cout << endl; cout << "Question 9. What is the name of the vendor that you use eriduim to buy an increase ammo/backpack capacity?\n";
		getline(cin >> ws, Q9WAGER);

		if (Q9WAGER == "CRAZYEARL" || Q9WAGER == "CrazyEarl" || Q9WAGER == "crazyearl" || Q9WAGER == "CRAZY EARL" || Q9WAGER == "Crazy Earl" || Q9WAGER == "crazy earl")
		{

			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct ";
			SetConsoleTextAttribute(h, 18); cout << "+" << WAGER;
			SetConsoleTextAttribute(h, 7); cout << " points!!\n";
			SCORE9 = WAGER;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}
			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect -" << WAGER << " points!!\n";
			SCORE9 = -WAGER;
			STREAK = 0;
		}
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 10. You will have three tries to answer this question and will be rewarded with answering the question correct on the least amount of atte-mpts. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	for (int x = 1; x <= 3; x++)
	{
		cout << "Which weapon is considered a 'Pearlescent'?\n";
		cout << " (A) Slagga		(B) KerBlaster		(C) Pitchfork		(D) Skullmasher		(E) Butcher		(F) Conference Call\n";
		cin >> Q10;
		system("cls"); cout << endl;


		if (Q10 == 'E' || Q10 == 'e')
		{

			if (x == 1)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +30 points!\n";
				SCORE10 = 30;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;

			}
			else if (x == 2)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +20 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 20;
				STREAK = 0;
			}
			else if (x == 3)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +10 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 10;
				STREAK = 0;
			}

			break;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE10 = 0;
			STREAK = 0;


		}
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "Question 11 (10 points). Which characters died in the main story?\n";
	cout << "(A) Roland and Brick		(B) Handsome Jack and Angel\n";
	cout << "(C) Mordecai and Brick		(D) Roland and Bloodwing\n";
	cout << "(E) Both b and c		(F) Both c and d\n";
	cout << "(G) Both b and d		(H) None of the above\n";
	cin >> Q11; cout << endl;
	if (Q11 == 'G' || Q11 == 'g')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +10 points!\n";
		SCORE11 = 10;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE11 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 12 (5 points) TRUE/FALSE. ";
	cout << "Hyperious is a raid boss in the Captain Scarlet DLC.\n";
	getline(cin >> ws, Q12); cout << endl;
	if (Q12 == "true" || Q12 == "TRUE" || Q12 == "True" || Q12 == "T" || Q12 == "t" || Q12 == "YES" || Q12 == "yes" || Q12 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +5 points!\n";
		SCORE12 = 5;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE12 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 13, 14, and 15 will be presented differently. If you get Question 13 correct, it will continue to Question 14 and so on.\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "However, if you get Question 13 wrong, you will not have the oppurtunity to answer Questions 14 and 15, same will be said with Question 14. Must get all right to contiune streak. GOODLUCK!!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 13 (7 points) TRUE/FALSE. The item 'Antagonists' is a grenade.\n";
	getline(cin >> ws, Q13);
	if (Q13 == "false" || Q13 == "False" || Q13 == "FALSE" || Q13 == "f" || Q13 == "F" || Q13 == "NO" || Q13 == "no" || Q13 == "No")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +7 points!\n";
		SCORE13 = 7;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
		cout << "Question 14 (5 points). Which character is not considered a vender?\n";
		cout << "(A) Marcus		(B) Tannis		(C) Dr. Zed		(D) Torgue\n";
		cin >> Q14;
		if (Q14 == 'b' || Q14 == 'B')
		{
			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct +5 points!\n";
			SCORE14 = 5;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}

			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
			else if (streak10(STREAK) == 10)
			{
				SetConsoleTextAttribute(h, 11);
				cout << "TEN IN A ROW!!!" << endl;
			}
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			system("cls"); cout << endl;
			cout << "Question 15 (8 points). What is the name of a specific rare enemy type who has an increased drop rate to give the player rarer items, an example being a ______ spiderant.\n";
			getline(cin >> ws, Q15);
			if (Q15 == "CHUBBY" || Q15 == "Chubby" || Q15 == "chubby" || Q15 == "TUBBY" || Q15 == "Tubby" || Q15 == "tubby")
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +8 points!\n";
				SCORE15 = 8;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				system("cls"); cout << endl;
			}
			else
			{
				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "Incorrect +0 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE15 = 0;
				STREAK = 0;
			}
			system("cls"); cout << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE14 = 0;
			SCORE15 = 0;
			STREAK = 0;

		}
	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE13 = 0;
		SCORE14 = 0;
		SCORE15 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "For Questions 16, 17, 18, and 19, each question will be worth 1+ points, however their is a twist!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "For each question you get correct in a row, a x2 mulitplier will be added until that streak is broken. GOODLUCK!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 16 TRUE/FALSE. Commander Lilith and the Fight for Sanctuary is the final dlc\n";
	getline(cin >> ws, Q16);
	if (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE16 = 1;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE16 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "Question 17. Which character was responsible for granting you access to vehicles? \n";
	cout << "(A) SCOOTER	(B) ROLAND	(C) MARCUS	(D) NONE OF THE ABOVE\n";
	cin >> Q17;
	if ((Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE17 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if (Q17 == 'a' || Q17 == 'A')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE17 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE17 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 18. Which is the final boss in the Captain Scarlet dlc?\n";
	cout << "(A) Piston	(B) Leviathin	(C) Master Gee	(D) Hyperiuous \n";
	cin >> Q18;
	if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE18 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE18 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if (Q18 == 'b' || Q18 == 'B')
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE18 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE18 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 19. What element is Hyperion robot enemies vulnerable to?\n";
	cout << "(A) Fire	(B) Shock	(C) Corrossive	(D) None of the Above\n";
	cin >> Q19;
	if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +8 points!\n";
		SCORE19 = 8;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE19 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q19 == 'c' || Q19 == 'C'))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE19 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE19 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "You have made it to the end of the Quiz!!!! Last question. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 20. Did you enjoy the quiz, type YES or NO.\n";
	cin >> Q20;
	if (Q20 == "YES" || Q20 == "yes" || Q20 == "Yes")
	{
		cout << "FUCKIN LETS GOOOOO, take some juicy succulent points (+10 points).\n";
		SCORE20 = 10;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else
	{
		cout << "Well shit\n";
		SCORE20 = 0;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "CONGRATZZZZ YOU DONEEEE!! Here are your final results:\n"; cout << endl;
	FINALSCORE = CURRENTSCORE + SCORE9 + SCORE10 + SCORE11 + SCORE12 + SCORE13 + SCORE14 + SCORE15 + SCORE16 + SCORE17 + SCORE18 + SCORE19 + SCORE20;
	cout << "Your total score: " << FINALSCORE << "/230"; cout << endl;


	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "If you would like to go back to the menu to take another quiz, enter 1, if you wnna exit, enter 0\n";
	cin >> BACKMENU;
	if (BACKMENU == 1)
	{

		instructions(); cout << endl; string n1;

		cout << "Please enter your username\n"; getline(cin, n1); cout << endl;
		system("cls"); cout << endl;
		Welcome(n1);
		menu1();
	}
	else
	{
		cout << "GOODBYE!!!";
		exit(0);
	}





}
void Sponge()
{

	string z;// confirmation the user wants this category.
	cout << " You chose SPONGEBOB SQUAREPANTS, are you ready to be tested? If not, enter no and you will be able to choose another option.\n";
	getline(cin, z); cout << endl;
	system("cls"); cout << endl;
	if (z == "Yes" || z == "YES" || z == "yes" || z == "YEA" || z == "yea" || z == "Yea" || z == "Y" || z == "y")
	{
		cout << "WE WILL NOW START THE QUIZ!!\n" << endl;
		Spongequiz();
		//function goes here bl2quiz goes here
	}
	else if (z == "no" || z == "NO" || z == "No" || z == "nah" || z == "Nah" || z == "NAH" || z == "n" || z == "N")
	{
		menu1c(); cout << endl;
	}
}
void Spongequiz()
{
	float  SCORE1, SCORE2, SCORE3, SCORE4a, SCORE5, SCORE6a, SCORE6B, SCORE6C, SCORE7, SCORE8, CURRENTSCORE, WAGER, SCORE9, SCORE10, CURRRENTSCORE2, SCORE11, SCORE12, SCORE13, SCORE14, SCORE15, SCORE16, SCORE17, SCORE18, SCORE19, SCORE20, FINALSCORE, STREAK, BACKMENU;
	float SCORE4b;
	STREAK = 0;
	string Q3, Q4a, Q4b, Q5, Q7, Q12, Q13, Q15, Q16, Q20;
	char Q1, Q2, Q10, Q11, Q14, Q17, Q18, Q19;
	int Q8A, Q8B, Q8C, Q8D;
	cout << " Question 1 (5 points). Which of these characters live under a tree dome?" << endl;
	cout << " (A) Spongebob		(B) Sandy		(C) Patrick		(D) Squidward" << endl;
	cin >> Q1; cout << endl;
	if (Q1 == 'B' || Q1 == 'b')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE1 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points.\n";
		SCORE1 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 2 (5 points). What was the name of Sandy's pet that Spongebob and Patrick needed to watch that escaped from its jar and 'attacked' the Bikini Bottom? " << endl;
	cout << " (A) Snaily	(B) Gary		(C) Wormy		(D) Rex" << endl;
	cin >> Q2; cout << endl;
	if (Q2 == 'C' || Q2 == 'c')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE2 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 7);

		if (streak2(STREAK) == 2)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}


	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE2 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 3 (10 points). Name the starfish that Patrick accidentally thought was his actual father?\n";
	getline(cin >> ws, Q3); cout << endl;
	if (Q3 == "MARTY" || Q3 == "marty" || Q3 == "Marty" || Q3 == "Marti" || Q3 == "MARTI" || Q3 == "marti")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +10 points!!\n";
		SCORE3 = 10.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Streak started!\n" << endl;

		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE3 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	cout << "Question 4 (5 points) TRUE/FALSE. Spongebob's karate set (gloves and helmet) was the color green.\n";
	getline(cin >> ws, Q4a); cout << endl;
	if (Q4a == "False" || Q4a == "false" || Q4a == "FALSE" || Q4a == "f" || Q4a == "F" || Q4a == "NO" || Q4a == "no" || Q4a == "No")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE4a = 5.00;
		STREAK++;

		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Two in a row!!\n";

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "BONUS QUESTION (5 points, will not effect your streak). What color were Spongebob's karate set?\n";
		getline(cin >> ws, Q4b); cout << endl;
		if (Q4b == "red" || Q4b == "RED" || Q4b == "Red")
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 10);
			cout << "BONUS QUESTION CORRECT +5 points!!\n";
			SCORE4b = 5.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}

		else
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 12);
			cout << "BONUS QUESTION WRONG, back to the quiz\n ";
			SCORE4b = 0.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE4a = 0.00; SCORE4b = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << "Question 5 (5 points). What was the name of Squidward's panting in the episode 'Artist Uknown', 'BOLD and _____. (the painting was him with a solid yellow background?\n";
	getline(cin >> ws, Q5); cout << endl;
	if (Q5 == "Brash" || Q5 == "brash" || Q5 == "BRASH")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE5 = 5.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE5 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	struct
	{
		float vn;
		string LEAK;
		string BAND;
	} Question6;
	float Q6A;
	string Q6b, Q6c;
	cout << "Question 6 (EACH 3 POINTS, MUST GET ALL CORRECT TO CONTINUE STREAK). a) How many of the character's dreams does Sponebob enter in the episode 'Sleepy Time'? (Example: 1 'enter'.)\n";
	while (!(cin >> Q6A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	Question6.vn = Q6A;

	if (Q6A == 7)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6a = 3.00;

	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6a = 0.00;

	}HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;

	cout << "b) Finish this line said by Patrick, 'Where's the ____ Maam?\n";
	getline(cin >> ws, Q6b); Question6.LEAK = Q6b;
	if (Q6b == "LEAK" || Q6b == "leak" || Q6b == "Leak")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6B = 3.00;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6B = 0.00;

	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "c) Finish the line said by Squidward: Squilliam Fancyson from ____ class!\n";
	getline(cin >> ws, Q6c); Question6.BAND = Q6c;
	if (Q6c == "band" || Q6c == "Band" || Q6c == "BAND")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6C = 3.00;


	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6C = 0.00;

	}

	if (Q6A == 7 && (Q6b == "LEAK" || Q6b == "leak" || Q6b == "Leak") && (Q6c == "band" || Q6c == "Band" || Q6c == "BAND"))
	{
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got all them right and a streak going!" << endl;

		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "WHIFF MY HUMAN GASS U GOT 6 INA ROW!!" << endl;

		}

	}
	else
	{
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 7 (6 points). Which character states: I WENT TO COLLEGE!!!!\n";
	getline(cin >> ws, Q7);
	if (Q7 == "PLANKTON" || Q7 == "plankton" || Q7 == "Plankton")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +6 points!!\n";
		SCORE7 = 6.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE7 = 0.00;
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "Question 8 (5 points each, MUST GET ALL CORRECT TO CONTINUE STREAK)." << endl << " Put these steps to make a Krabby Patty in order, from the bottom bun to the top bun.\n";
	cout << " Type the number of your choice and click 'enter', YOU WILL NOT BE ABLE TO CHANGE YOUR ANSWER ONCE IT IS ENTERED SO BE CAREFUL (Example, 1 'enter', 2 'enter'.)\n";
	cout << " Preview:\n" << "1 'enter \n" << "2 'enter'\n" << "3 'enter' \n" << "4 'enter'\n"; cout << endl;
	cout << "(1). Pickles.\n" << "(2). Onions/Lettuce.\n" << "(3). Ketchup/Mustard.\n" << "(4). Cheese/Tomatoes.\n";
	while (!(cin >> Q8A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8B))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8C))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8D))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}

	if (Q8A == 3 && Q8B == 1 && Q8C == 2 && Q8D == 4)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "YOU GOT ALL CORRECT!! +20 points\n";
		SCORE8 = 20.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
	}
	else if ((Q8A != 3 && Q8B == 1 && Q8C == 2 && Q8D == 4) || (Q8A == 3 && Q8B != 1 && Q8C == 2 && Q8D == 4) || (Q8A == 3 && Q8B == 1 && Q8C != 2 && Q8D == 4) || (Q8A == 3 && Q8B == 1 && Q8C == 2 && Q8D != 4))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "THREE OUTTA FOUR CORRECT +15 points!!\n";
		SCORE8 = 15.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C == 2 && Q8D == 4) || (Q8A != 3 && Q8B == 1 && Q8C != 2 && Q8D == 4) || (Q8A != 3 && Q8B == 1 && Q8C == 2 && Q8D != 4) || (Q8A == 3 && Q8B != 1 && Q8C != 2 && Q8D == 4) || (Q8A == 3 && Q8B != 1 && Q8C == 2 && Q8D != 4) || (Q8A == 3 && Q8B != 1 && Q8C == 2 && Q8D != 4) || (Q8A == 3 && Q8B == 1 && Q8C != 2 && Q8D != 4))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY HALF RIGHT +10 points!!\n";
		SCORE8 = 10.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C != 2 && Q8D == 4) || (Q8A != 3 && Q8B == 1 && Q8C != 2 && Q8D != 4) || (Q8A == 3 && Q8B != 1 && Q8C != 2 && Q8D != 4) || (Q8A != 3 && Q8B != 1 && Q8C == 2 && Q8D != 4))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY ONE RIGHT 5 points!!\n";
		SCORE8 = 5.00;
		STREAK = 0.00;
	}
	else if (Q8A != 3 && Q8B != 1 && Q8C != 2 && Q8D != 4)
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "ALL WRONG +0 points!!\n";
		SCORE8 = 0.00;
		STREAK = 0.00;
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	CURRENTSCORE = SCORE1 + SCORE2 + SCORE3 + SCORE4a + SCORE4b + SCORE5 + SCORE6a + SCORE6B + SCORE6C + SCORE7 + SCORE8;
	string Q9WAGER;
	cout << "Question 9. WAGER!!! Your current score is " << CURRENTSCORE << "." << endl;
	if (CURRENTSCORE == 0)
	{
		float WAGERCHOICE;
		char Q9;
		cout << "Unfortunatley, you do not have any points to wager, however I will you give a choice.\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "Would you like to attempt to answer Question 9 and if answered correctly, you will gain 50 POINTS!!\n";
		cout << "However, if you get it wrong, you will automacially fail the quiz and will be exited out of the quiz\n";
		cout << "If you choose not to do so, you will simply just skip question 9 and proceed with the quiz with ur currentscore\n";
		cout << "Enter 1 to WAGER and 2 to SKIP   "; cout << endl; cin >> WAGERCHOICE;
		system("cls"); cout << endl;
		if (WAGERCHOICE == 1)
		{
			cout << "ALRIGHT, HERE IS QUESTION 9. What was the food that Spongebob threw at Clamu the perfoming oster?\n";
			cout << "A. KRABBY PATTY	B. PEANUT	C. CORAL BITS	D. ICE CREAM	E. NONE OF THE ABOVE\n";
			cin >> Q9;
			if (Q9 == 'b' || Q9 == 'B')
			{
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "CORRECT!! NOW YOUR BACK IN THE GAME +50 POINTS!!\n";
				SCORE9 = 50.00;
				STREAK++;
			}

			else
			{

				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "WRONG ";  GAMEOVER(); exit(0);
				SCORE9 = 0.00;
			}

		}
		else if (WAGERCHOICE == 2)
		{
			cout << "Taking your chances and proceeding with the quiz, on with the rest of the quiz\n";
			SCORE9 = 0.00;
		}


	}

	if (CURRENTSCORE > 1)
	{


		cout << "Please enter the amount you would like to wager (1-" << CURRENTSCORE << ")." << endl;
		cin >> WAGER;

		for (WAGER; WAGER == 0;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER > CURRENTSCORE;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}


		for (WAGER; WAGER > CURRENTSCORE;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER == 0;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}

		cout << "You are wagering "; HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 18);
		cout << WAGER;
		SetConsoleTextAttribute(h, 7); cout << " points." << endl;
		SetConsoleTextAttribute(h, 14); system("pause");
		SetConsoleTextAttribute(h, 7); system("cls"); cout << endl; cout << "Question 9. Name the friend that Spongebob made on Leif Erickson Day. (Example: ______ _____)\n";
		getline(cin >> ws, Q9WAGER);

		if (Q9WAGER == "BUBBLE BUDDY" || Q9WAGER == "BubbleBuddy" || Q9WAGER == "bubblebuddy" || Q9WAGER == "BUBBLEBUDDY" || Q9WAGER == "Bubble Buddy" || Q9WAGER == "bubble buddy")
		{

			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct ";
			SetConsoleTextAttribute(h, 18); cout << "+" << WAGER;
			SetConsoleTextAttribute(h, 7); cout << " points!!\n";
			SCORE9 = WAGER;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}
			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect -" << WAGER << " points!!\n";
			SCORE9 = -WAGER;
			STREAK = 0;
		}
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 10. You will have three tries to answer this question and will be rewarded with answering the question correct on the least amount of atte-mpts. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	for (int x = 1; x <= 3; x++)
	{
		cout << "What specific type of money does Mr. Krabs accuse Squidward of stealing which is consisdered his first ever one he recieved?\n";
		cout << " (A) Dollar		(B) Nickel		(C) Penny		(D) Check		(E) Dime		(F) None of the Above\n";
		cin >> Q10;
		system("cls"); cout << endl;


		if (Q10 == 'E' || Q10 == 'e')
		{

			if (x == 1)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +30 points!\n";
				SCORE10 = 30;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;

			}
			else if (x == 2)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +20 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 20;
				STREAK = 0;
			}
			else if (x == 3)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +10 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 10;
				STREAK = 0;
			}

			break;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE10 = 0;
			STREAK = 0;
		}
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "Question 11 (10 points). Which choice is true about the International Justice League of Super Acquaintances?\n";
	cout << "(A) Sponegbob is Captain Magma		(B) Spongebob is the Quickster\n";
	cout << "(C) Squidward is the Quickster		(D) Patrick is Elastic Waistband \n";
	cout << "(E) Both b and c			(F) Both b and d\n";
	cout << "(G) Both c and d			(H) None of the above\n";
	cin >> Q11; cout << endl;
	if (Q11 == 'f' || Q11 == 'F')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +10 points!\n";
		SCORE11 = 10;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE11 = 0;
		STREAK = 0;

	}
	system("cls"); cout << endl;
	cout << "Question 12 (5 points) TRUE/FALSE. ";
	cout << "Spongebob convinces Squidward that Mr. Krabs is a robot.\n";
	getline(cin >> ws, Q12); cout << endl;
	if (Q12 == "true" || Q12 == "TRUE" || Q12 == "True" || Q12 == "T" || Q12 == "t" || Q12 == "YES" || Q12 == "Yes" || Q12 == "yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +5 points!\n";
		SCORE12 = 5;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE12 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 13, 14, and 15 will be presented differently. If you get Question 13 correct, it will continue to Question 14 and so on.\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "However, if you get Question 13 wrong, you will not have the oppurtunity to answer Questions 14 and 15, same will be said with Question 14. Must get all right to contiune streak. GOODLUCK!!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 13 (7 points) TRUE/FALSE. Sponbebob names his seahorse Majesty.\n";
	getline(cin >> ws, Q13);
	if (Q13 == "false" || Q13 == "False" || Q13 == "FALSE" || Q13 == "f" || Q13 == "F" || Q13 == "NO" || Q13 == "no" || Q4a == "No")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +7 points!\n";
		SCORE13 = 7;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
		cout << "Question 14 (5 points). Which character is not considered a Mermaidman and Barnacleboy villian? \n";
		cout << "(A) Bubble Bass		(B) Man Ray		(C) Dirty Bubble		(D) Atomic Flounder\n";
		cin >> Q14;
		if (Q14 == 'a' || Q14 == 'A')
		{
			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct +5 points!\n";
			SCORE14 = 5;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}

			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
			else if (streak10(STREAK) == 10)
			{
				SetConsoleTextAttribute(h, 11);
				cout << "TEN IN A ROW!!!" << endl;
			}
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			system("cls"); cout << endl;
			cout << "Question 15 (8 points). What is the name of the cold that Spongebob gets when he leaves the fridge open overnight, the ____?\n";
			getline(cin >> ws, Q15);
			if (Q15 == "suds" || Q15 == "Suds" || Q15 == "SUDS" || Q15 == "sudz" || Q15 == "Sudz" || Q15 == "SUDZ")
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +8 points!\n";
				SCORE15 = 8;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				system("cls"); cout << endl;
			}
			else
			{
				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "Incorrect +0 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE15 = 0;
				STREAK = 0;
			}
			system("cls"); cout << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE14 = 0;
			SCORE15 = 0;
			STREAK = 0;
		}
	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE13 = 0;
		SCORE14 = 0;
		SCORE15 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "For Questions 16, 17, 18, and 19, each question will be worth 1+ points, however their is a twist!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "For each question you get correct in a row, a x2 mulitplier will be added until that streak is broken. GOODLUCK!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 16 TRUE/FALSE. Nematodes drink Spongebob's pineapple home.\n";
	getline(cin >> ws, Q16);
	if (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "T" || Q16 == "t" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE16 = 1;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE16 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "Question 17. Which category does Squidward teach Spongebob at the Rec Center? \n";
	cout << "(A) Music		(B) COOKING			(C) Art		(D) NONE OF THE ABOVE\n";
	cin >> Q17;
	if ((Q17 == 'c' || Q17 == 'C') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "T" || Q16 == "t" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE17 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if (Q17 == 'c' || Q17 == 'C')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE17 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE17 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 18. What gift does Squidward give Spongebob on Employee Brotherhood Day?\n";
	cout << "(A) Sweater	(B) Pie		(C) His Shirt	(D) A Gumball \n";
	cin >> Q18;
	if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'c' || Q17 == 'C') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "T" || Q16 == "t" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE18 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'c' || Q17 == 'C'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE18 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if (Q18 == 'b' || Q18 == 'B')
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE18 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE18 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 19. In times of hardship, what did Spongebob say the pioneers would eat?\n";
	cout << "(A) Sand			(B) Seaweed			(C) Coral		(D) None of the Above\n";
	cin >> Q19;
	if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'c' || Q17 == 'C') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "T" || Q16 == "t" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +8 points!\n";
		SCORE19 = 8;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'c' || Q17 == 'C'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE19 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q19 == 'c' || Q19 == 'C'))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE19 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE19 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "You have made it to the end of the Quiz!!!! Last question. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 20. Did you enjoy the quiz, type YES or NO.\n";
	cin >> Q20;
	if (Q20 == "YES" || Q20 == "yes" || Q20 == "Yes")
	{
		cout << "FUCKIN LETS GOOOOO, take some juicy scucclent points (+10 points).\n";
		SCORE20 = 10;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else
	{
		cout << "Well shit\n";
		SCORE20 = 0;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "CONGRATZZZZ YOU DONEEEE!! Here are your final results:\n"; cout << endl;
	FINALSCORE = CURRENTSCORE + SCORE9 + SCORE10 + SCORE11 + SCORE12 + SCORE13 + SCORE14 + SCORE15 + SCORE16 + SCORE17 + SCORE18 + SCORE19 + SCORE20;
	cout << "Your total score: " << FINALSCORE << "/230."; cout << endl;


	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "If you would like to go back to the menu to take another quiz, enter 1, if you wnna exit, enter 0\n";
	cin >> BACKMENU;
	if (BACKMENU == 1)
	{

		instructions(); cout << endl; string n1;

		cout << "Please enter your username\n"; getline(cin, n1); cout << endl;
		system("cls"); cout << endl;
		Welcome(n1);
		menu1();
	}
	else
	{
		cout << "GOODBYE!!!";
		exit(0);
	}
}
void mk()
{
	string z;// confirmation the user wants this category.
	cout << " You chose MORTAL KOMBAT FRANCHISE, are you ready to be tested? If so type in YES, if not, enter NO and you will be able to choose another option.\n";
	getline(cin, z); cout << endl;
	system("cls"); cout << endl;
	if (z == "Yes" || z == "YES" || z == "yes" || z == "YEA" || z == "yea" || z == "Yea" || z == "Y" || z == "y")
	{
		cout << "WE WILL NOW START THE QUIZ!!\n" << endl;
		mkquiz();
		//function goes here bl2quiz goes here
	}
	else if (z == "no" || z == "NO" || z == "No" || z == "nah" || z == "Nah" || z == "NAH" || z == "n" || z == "N")
	{
		menu1a(); cout << endl;
	}
}
void mkquiz()
{
	float  SCORE1, SCORE2, SCORE3, SCORE4a, SCORE5, SCORE6a, SCORE6B, SCORE6C, SCORE7, SCORE8, CURRENTSCORE, WAGER, SCORE9, SCORE10, CURRRENTSCORE2, SCORE11, SCORE12, SCORE13, SCORE14, SCORE15, SCORE16, SCORE17, SCORE18, SCORE19, SCORE20, FINALSCORE, STREAK, BACKMENU;
	float SCORE4b;
	STREAK = 0;
	string Q3, Q4a, Q4b, Q5, Q7, Q12, Q13, Q15, Q16, Q20;
	char Q1, Q2, Q10, Q11, Q14, Q17, Q18, Q19;
	int Q8A, Q8B, Q8C, Q8D;
	cout << " Question 1 (5 points). Who was the final boss in the first ever Mortal Kombat game, Mortal Kombat 1?" << endl;
	cout << " (A) Shao Kahn		(B) Shinnok		(C) Goro		(D) Shang Tsung" << endl;
	cin >> Q1; cout << endl;
	if (Q1 == 'D' || Q1 == 'd')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE1 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points.\n";
		SCORE1 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 2 (5 points). Which game was Goro introduced as a playable character for the first time?" << endl;
	cout << " (A) Mortal Kombat Deception		(B) Mortal Kombat X		(C) Mortal Kombat Trilogy		(D) Mortal Kombat Armageddon" << endl;
	cin >> Q2; cout << endl;
	if (Q2 == 'C' || Q2 == 'c')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE2 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 7);

		if (streak2(STREAK) == 2)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}


	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE2 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 3 (10 points). Name the character that is considered to be the purple ninja?\n";
	getline(cin >> ws, Q3); cout << endl;
	if (Q3 == "RAIN" || Q3 == "rain" || Q3 == "Rain")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +10 points!!\n";
		SCORE3 = 10.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Streak started!\n" << endl;

		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE3 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	cout << "Question 4 (5 points) TRUE/FALSE. In Mortal Kombat Deadly Alliance, Shang Tsung snaps Lui Kangs neck.   \n";
	cin >> Q4a; cout << endl;
	if (Q4a == "TRUE" || Q4a == "true" || Q4a == "True" || Q4a == "t" || Q4a == "T" || Q4a == "YES" || Q4a == "yes" || Q4a == "Yes")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE4a = 5.00;
		STREAK++;

		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Two in a row!!\n";

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "BONUS QUESTION (5 points, will not effect your streak). Name the character that aided Shang Tsung in killing Kui Kang in Mortal Kombat Deadly Alliance \n";
		getline(cin >> ws, Q4b); cout << endl;
		if (Q4b == "QUANCHI" || Q4b == "Quanchi" || Q4b == "quanchi" || Q4b == "QUAN CHI" || Q4b == "quan chi" || Q4b == "Quan Chi" || Q4b == "QuanChi")
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 10);
			cout << "BONUS QUESTION CORRECT +5 points!!\n";
			SCORE4b = 5.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}

		else
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 12);
			cout << "BONUS QUESTION WRONG, back to the quiz\n ";
			SCORE4b = 0.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE4a = 0.00; SCORE4b = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << "Question 5 (5 points). Name the Sub Zero that dies and becomes Noob Saibot in MK9?\n";
	getline(cin >> ws, Q5); cout << endl;
	if (Q5 == "BIHAN" || Q5 == "bihan" || Q5 == "Bihan" || Q5 == "Bi Han" || Q5 == "bi han" || Q5 == "BI HAN" || Q5 == "BiHan")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE5 = 5.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE5 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	struct
	{
		float vn;
		string BAHA;
		string OCEAN;
	} Question6;
	float Q6A;
	string Q6b, Q6c;
	cout << "Question 6 (EACH 3 POINTS, MUST GET ALL CORRECT TO CONTINUE STREAK). a) How many playable cyberninjas are their out of all the Mortal Kombat games? (Example: 1,2,3...)\n";
	while (!(cin >> Q6A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	Question6.vn = Q6A;

	if (Q6A == 4)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6a = 3.00;

	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6a = 0.00;

	}HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;

	cout << "b) Name the character who contorts his body in his gameplay and is known for his love for causing chaos?\n";
	getline(cin >> ws, Q6b); Question6.BAHA = Q6b;
	if (Q6b == "havik" || Q6b == "HAVIK" || Q6b == "Havik" || Q6b == "havick" || Q6b == "HAVICK" || Q6b == "Havick")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6B = 3.00;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6B = 0.00;

	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "c) Who was the first playable guest character?\n";
	getline(cin >> ws, Q6c); Question6.OCEAN = Q6c;
	if (Q6c == "KRATOS" || Q6c == "Kratos" || Q6c == "kratos")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6C = 3.00;


	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6C = 0.00;

	}

	if (Q6A == 4 && (Q6b == "havik" || Q6b == "HAVIK" || Q6b == "Havik" || Q6b == "havick" || Q6b == "HAVICK" || Q6b == "Havick") && (Q6c == "KRATOS" || Q6c == "Kratos" || Q6c == "kratos"))
	{
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got all them right and a streak going!" << endl;

		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "WHIFF MY HUMAN GASS U GOT 6 INA ROW!!" << endl;

		}
	}
	else
	{
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 7 (6 points). Name the first ever female playable character.\n";
	getline(cin >> ws, Q7);
	if (Q7 == "SONYA" || Q7 == "sonya" || Q7 == "Sonya")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +6 points!!\n";
		SCORE7 = 6.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE7 = 0.00;
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "Question 8 (5 points each, MUST GET ALL CORRECT TO CONTINUE STREAK)." << endl << " Put these characters in order from which ones were first introduced as playable to last.\n";
	cout << " Type the number of your choice and click 'enter', YOU WILL NOT BE ABLE TO CHANGE YOUR ANSWER ONCE IT IS ENTERED SO BE CAREFUL (Example, 1 'enter', 2 'enter'.)\n";
	cout << "Preview:\n" << "1 'enter'\n" << "2 'enter'\n" << "3 'enter'\n" << "4 'enter'\n";
	cout << "(1). Baraka\n" << "(2). Nightwolf \n" << "(3). Drahmin\n" << "(4). Ermac\n";
	while (!(cin >> Q8A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8B))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8C))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8D))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}

	if (Q8A == 1 && Q8B == 2 && Q8C == 4 && Q8D == 3)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "YOU GOT ALL CORRECT!! +20 points\n";
		SCORE8 = 20.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
	}
	else if ((Q8A != 1 && Q8B == 2 && Q8C == 4 && Q8D == 3) || (Q8A == 1 && Q8B != 2 && Q8C == 4 && Q8D == 3) || (Q8A == 1 && Q8B == 2 && Q8C != 4 && Q8D == 3) || (Q8A == 1 && Q8B == 2 && Q8C == 4 && Q8D != 3))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "THREE OUTTA FOUR CORRECT +15 points!!\n";
		SCORE8 = 15.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 1 && Q8B != 2 && Q8C == 4 && Q8D == 3) || (Q8A != 1 && Q8B == 2 && Q8C != 4 && Q8D == 3) || (Q8A != 1 && Q8B == 2 && Q8C == 4 && Q8D != 3) || (Q8A == 1 && Q8B != 2 && Q8C != 4 && Q8D == 3) || (Q8A == 1 && Q8B != 2 && Q8C == 4 && Q8D != 3) || (Q8A == 1 && Q8B != 2 && Q8C == 4 && Q8D != 3) || (Q8A == 1 && Q8B == 2 && Q8C != 4 && Q8D != 3))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY HALF RIGHT +10 points!!\n";
		SCORE8 = 10.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 1 && Q8B != 2 && Q8C != 4 && Q8D == 3) || (Q8A != 1 && Q8B == 2 && Q8C != 4 && Q8D != 3) || (Q8A == 1 && Q8B != 2 && Q8C != 4 && Q8D != 3) || (Q8A != 1 && Q8B != 2 && Q8C == 4 && Q8D != 3))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY ONE RIGHT 5 points!!\n";
		SCORE8 = 5.00;
		STREAK = 0.00;
	}
	else if (Q8A != 1 && Q8B != 2 && Q8C != 4 && Q8D != 3)
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "ALL WRONG +0 points!!\n";
		SCORE8 = 0.00;
		STREAK = 0.00;
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	CURRENTSCORE = SCORE1 + SCORE2 + SCORE3 + SCORE4a + SCORE4b + SCORE5 + SCORE6a + SCORE6B + SCORE6C + SCORE7 + SCORE8;
	string Q9WAGER;
	cout << "Question 9. WAGER!!! Your cuurent score is " << CURRENTSCORE << "." << endl;
	if (CURRENTSCORE == 0)
	{
		float WAGERCHOICE;
		char Q9;
		cout << "Unfortunatley, you do not have any points to wager, however I will give a choice.\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "Would you like to attempt to answer Question 9 and if answered correctly, you will gain 50 POINTS!!\n";
		cout << "However, if you get it wrong, you will automacially fail the quiz and will be exited out of the quiz\n";
		cout << "If you choose not to do so, you will simply just skip question 9 and proceed with the quiz with ur currentscore\n";
		cout << "Enter 1 to WAGER and 2 to SKIP   "; cout << endl; cin >> WAGERCHOICE;
		system("cls"); cout << endl;
		if (WAGERCHOICE == 1)
		{
			cout << "ALRIGHT, HERE IS QUESTION 9. Which character was not playable in MK3?\n";
			cout << "A. Scorpion	B. Subzero	C. Shang Tsung	D. Cyrax	E. NONE OF THE ABOVE\n";
			cin >> Q9;
			if (Q9 == 'A' || Q9 == 'a')
			{
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "CORRECT!! NOW YOUR BACK IN THE GAME +50 POINTS!!\n";
				SCORE9 = 50.00;
				STREAK++;
			}

			else
			{

				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "WRONG ";  GAMEOVER(); exit(0);
				SCORE9 = 0.00;
				STREAK = 0;
			}

		}
		else if (WAGERCHOICE == 2)
		{
			cout << "Taking your chances and proceeding with the quiz, on with the rest of the quiz\n";
			SCORE9 = 0.00;
		}


	}

	if (CURRENTSCORE > 1)
	{


		cout << "Please enter the amount you would like to wager (1-" << CURRENTSCORE << ")." << endl;
		cin >> WAGER;

		for (WAGER; WAGER == 0;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER > CURRENTSCORE;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}


		for (WAGER; WAGER > CURRENTSCORE;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER == 0;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}

		cout << "You are wagering "; HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 18);
		cout << WAGER;
		SetConsoleTextAttribute(h, 7); cout << " points." << endl;
		SetConsoleTextAttribute(h, 14); system("pause");
		SetConsoleTextAttribute(h, 7); system("cls"); cout << endl; cout << "Question 9. In MK1's new timeline, who is the keeper of time alongside with Liu Kang? \n";
		getline(cin >> ws, Q9WAGER);

		if (Q9WAGER == "GERAS" || Q9WAGER == "geras" || Q9WAGER == "Geras")
		{

			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct ";
			SetConsoleTextAttribute(h, 18); cout << "+" << WAGER;
			SetConsoleTextAttribute(h, 7); cout << " points!!\n";
			SCORE9 = WAGER;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}
			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect -" << WAGER << " points!!\n";
			SCORE9 = -WAGER;
			STREAK = 0;
		}
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 10. You will have three tries to answer this question and will be rewarded with answering the question correct on the least amount of atte-mpts. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	for (int x = 1; x <= 3; x++)
	{
		cout << "Which chaarcter kills Baraka and Mileena in the Mortal Kombat X story?\n";
		cout << " (A) Kotal Kahn		(B) D'Vorah		(C) Ermac		(D) Erron Black		(E) Reptile		(F) Kano\n";
		cin >> Q10;
		system("cls"); cout << endl;


		if (Q10 == 'B' || Q10 == 'b')
		{

			if (x == 1)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +30 points!\n";
				SCORE10 = 30;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;

			}
			else if (x == 2)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +20 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 20;
				STREAK = 0;
			}
			else if (x == 3)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +10 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 10;
				STREAK = 0;
			}

			break;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE10 = 0;
			STREAK = 0;


		}
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "Question 11 (10 points). Which characters were not bosses in Mortal Kombat Shaolin Monks?\n";
	cout << "(A) Scorpion and Subzero		(B) Kano and Ermac \n";
	cout << "(C) Kintaro and Motaro		(D) Shang Tsung and Goro";
	cout << "(E) Both b and c		(F) Both c and d\n";
	cout << "(G) Both b and d		(H) None of the above\n";
	cin >> Q11; cout << endl;
	if (Q11 == 'C' || Q11 == 'c')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +10 points!\n";
		SCORE11 = 10;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE11 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 12 (5 points) TRUE/FALSE. ";
	cout << "Tremor made his first apperance as a boss in Mortal Kombat Special Forces.\n";
	getline(cin >> ws, Q12); cout << endl;
	if (Q12 == "true" || Q12 == "TRUE" || Q12 == "True" || Q12 == "T" || Q12 == "t" || Q12 == "YES" || Q12 == "yes" || Q12 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +5 points!\n";
		SCORE12 = 5;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE12 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 13, 14, and 15 will be presented differently. If you get Question 13 correct, it will continue to Question 14 and so on.\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "However, if you get Question 13 wrong, you will not have the oppurtunity to answer Questions 14 and 15, same will be said with Question 14. Must get all right to contiune streak. GOODLUCK!!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 13 (7 points) Shunjinko was the main protaganist in the Mortal Kombat Deception stroy.\n";
	cin >> Q13;
	if (Q13 == "true" || Q13 == "TRUE" || Q13 == "True" || Q13 == "T" || Q13 == "t" || Q13 == "YES" || Q13 == "yes" || Q13 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +7 points!\n";
		SCORE13 = 7;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
		cout << "Question 14 (5 points). Which game had the game mode 'MOTOR KOMBAT'?\n";
		cout << "(A) Mortal Kombat Deadly Alliance	(B) Mortal Kombat Deception		(C) Mortal Kombat Triology		(D) Mortal Kombat Armagadeon\n";
		cin >> Q14;
		if (Q14 == 'D' || Q14 == 'd')
		{
			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct +5 points!\n";
			SCORE14 = 5;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}

			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
			else if (streak10(STREAK) == 10)
			{
				SetConsoleTextAttribute(h, 11);
				cout << "TEN IN A ROW!!!" << endl;
			}
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			system("cls"); cout << endl;
			cout << "Question 15 (8 points) .\n";// start here
			getline(cin >> ws, Q15);
			if (Q15 == "CHUBBY" || Q15 == "Chubby" || Q15 == "chubby" || Q15 == "TUBBY" || Q15 == "Tubby" || Q15 == "tubby")
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +8 points!\n";
				SCORE15 = 8;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				system("cls"); cout << endl;
			}
			else
			{
				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "Incorrect +0 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE15 = 0;
				STREAK = 0;
			}
			system("cls"); cout << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE14 = 0;
			SCORE15 = 0;
			STREAK = 0;

		}
	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE13 = 0;
		SCORE14 = 0;
		SCORE15 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "For Questions 16, 17, 18, and 19, each question will be worth 1+ points, however their is a twist!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "For each question you get correct in a row, a x2 mulitplier will be added until that streak is broken. GOODLUCK!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 16 TRUE/FALSE. Commander Lilith and the Fight for Sanctuary is the final dlc\n";
	cin >> Q16;
	if (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE16 = 1;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE16 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "Question 17.  From the original Mortal Kombat One to the rebooted timeline Mortal Kombat 1, which character did not have their stand alone game?\n";
	cout << "(A) SCOOTER	(B) ROLAND	(C) MARCUS	(D) NONE OF THE ABOVE\n";
	cin >> Q17;
	if ((Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE17 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if (Q17 == 'a' || Q17 == 'A')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE17 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE17 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 18. Which is the final boss in the Captain Scarlet dlc?\n";
	cout << "(A) Piston	(B) Leviathin	(C) Master Gee	(D) Hyperiuous \n";
	cin >> Q18;
	if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE18 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE18 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if (Q18 == 'b' || Q18 == 'B')
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE18 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE18 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 19. What element is Hyperion robot enemies vulnerable to?\n";
	cout << "(A) Fire	(B) Shock	(C) Corrossive	(D) None of the Above\n";
	cin >> Q19;
	if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +8 points!\n";
		SCORE19 = 8;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'a' || Q17 == 'A'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE19 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q19 == 'c' || Q19 == 'C'))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE19 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE19 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "You have made it to the end of the Quiz!!!! Last question. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 20. Did you enjoy the quiz?\n";
	cin >> Q20;
	if (Q20 == "YES" || Q20 == "yes" || Q20 == "Yes")
	{
		cout << "FUCKIN LETS GOOOOO, take some juicy succulent points (+10 points).\n";
		SCORE20 = 10;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else
	{
		cout << "Well shit\n";
		SCORE20 = 0;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "CONGRATZZZZ YOU DONEEEE!! Here are your final results:\n"; cout << endl;
	FINALSCORE = CURRENTSCORE + SCORE9 + SCORE10 + SCORE11 + SCORE12 + SCORE13 + SCORE14 + SCORE15 + SCORE16 + SCORE17 + SCORE18 + SCORE19 + SCORE20;
	cout << "Your total score: " << FINALSCORE << "/230"; cout << endl;


	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "If you would like to go back to the menu to take another quiz, enter 1, if you wnna exit, enter 0\n";
	cin >> BACKMENU;
	if (BACKMENU == 1)
	{

		instructions(); cout << endl; string n1;

		cout << "Please enter your username\n"; getline(cin, n1); cout << endl;
		system("cls"); cout << endl;
		Welcome(n1);
		menu1();
	}
	else
	{
		cout << "GOODBYE!!!";
		exit(0);
	}

}
void GOW() {
	string z;// confirmation the user wants this category.
	cout << " You chose GOD OF WAR FRANCHISE, are you ready to be tested? If so type in YES, if not, enter NO and you will be able to choose another option.\n";
	getline(cin, z); cout << endl;
	system("cls"); cout << endl;
	if (z == "Yes" || z == "YES" || z == "yes" || z == "YEA" || z == "yea" || z == "Yea" || z == "Y" || z == "y")
	{
		cout << "WE WILL NOW START THE QUIZ!!\n" << endl;
		GOWQUIZ();
		//function goes here bl2quiz goes here
	}
	else if (z == "no" || z == "NO" || z == "No" || z == "nah" || z == "Nah" || z == "NAH" || z == "n" || z == "N")
	{
		menu1a(); cout << endl;
	}

}
void GOWQUIZ() {

	float  SCORE1, SCORE2, SCORE3, SCORE4a, SCORE5, SCORE6a, SCORE6B, SCORE6C, SCORE7, SCORE8, CURRENTSCORE, WAGER, SCORE9, SCORE10, CURRRENTSCORE2, SCORE11, SCORE12, SCORE13, SCORE14, SCORE15, SCORE16, SCORE17, SCORE18, SCORE19, SCORE20, FINALSCORE, STREAK, BACKMENU;
	float SCORE4b;
	STREAK = 0;
	string Q1, Q3, Q4a, Q4b, Q5, Q7, Q12, Q13, Q15, Q16, Q20;
	char  Q2, Q10, Q11, Q14, Q17, Q18, Q19;
	int Q8A, Q8B, Q8C, Q8D;
	cout << " Question 1 (5 points). What is the name of Krato's kid in the God of War Reboot?" << endl;
	cout << " (A) Calliope		(B) Hercules		(C) Atreus		(D) Hades" << endl;
	getline(cin >> ws, Q1); cout << endl;
	if (Q1 == "C" || Q1 == "c")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE1 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);

	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points.\n";
		SCORE1 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 2 (5 points). What was the new weapon Kratos acquires in God of War Ragnarok?" << endl;
	cout << " (A) Leviathan Axe		(B) Gauntlet of Zeus		(C) Draupnir Spear		(D) Blade of Olympus" << endl;
	cin >> Q2; cout << endl;
	if (Q2 == 'C' || Q2 == 'c')
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE2 = 5.00;
		STREAK++;
		SetConsoleTextAttribute(h, 7);

		if (streak2(STREAK) == 2)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}


	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE2 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << " Question 3 (10 points). Name  the final boss in the first ever God of War.\n";
	getline(cin >> ws, Q3); cout << endl;
	if (Q3 == "ARES" || Q3 == "ares" || Q3 == "Ares")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +10 points!!\n";
		SCORE3 = 10.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Streak started!\n" << endl;

		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	else
	{

		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE3 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	cout << "Question 4 (5 points) TRUE/FALSE. Sindri is the dwarf that dies in GOW Ragnarok.\n";
	getline(cin >> ws, Q4a); cout << endl;
	if (Q4a == "False" || Q4a == "false" || Q4a == "FALSE" || Q4a == "f" || Q4a == "F" || Q4a == "NO" || Q4a == "no" || Q4a == "No")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE4a = 5.00;
		STREAK++;

		if (streak2(STREAK) == 2)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "Two in a row!!\n";

		}

		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "BONUS QUESTION (5 points, will not effect your streak). Which of the dwarf brothers did die?\n";
		getline(cin >> ws, Q4b); cout << endl;
		if (Q4b == "BROK" || Q4b == "brok" || Q4b == "Brok")
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 10);
			cout << "BONUS QUESTION CORRECT +5 points!!\n";
			SCORE4b = 5.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}

		else
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 12);
			cout << "BONUS QUESTION WRONG, back to the quiz\n ";
			SCORE4b = 0.00;
			SetConsoleTextAttribute(h, 14);
			system("pause");
			SetConsoleTextAttribute(h, 7);
		}
	}
	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE4a = 0.00; SCORE4b = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;
	cout << "Question 5 (5 points). What was the name of the father of Zeus who eats Kratos in GOW 3, ______?\n";
	getline(cin >> ws, Q5); cout << endl;
	if (Q5 == "CRONOS" || Q5 == "Cronos" || Q5 == "cronos")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10);
		cout << "CORRECT +5 points!!\n";
		SCORE5 = 5.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12);
		cout << "INCORRECT +0 points." << endl;
		SCORE5 = 0.00;
		STREAK = 0.00;
		SetConsoleTextAttribute(h, 14);
		system("pause");
		SetConsoleTextAttribute(h, 7);
	}
	system("cls"); cout << endl;

	struct
	{
		float vn;
		string BALDUR;
		string DAY;
	} Question6;
	float Q6A;
	string Q6b, Q6c;
	cout << "Question 6 (EACH 3 POINTS, MUST GET ALL CORRECT TO CONTINUE STREAK). a) How many total GOW games are their?\n";
	while (!(cin >> Q6A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	Question6.vn = Q6A;

	if (Q6A == 8)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6a = 3.00;

	}

	else
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6a = 0.00;

	}HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;

	cout << "b) Who was 'the Stranger' who was also the first boss in the GOW reboot, ______\n";
	getline(cin >> ws, Q6b); Question6.BALDUR = Q6b;
	if (Q6b == "BALDUR" || Q6b == "baldur" || Q6b == "Baldur")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6B = 3.00;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6B = 0.00;

	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "c) Finish the line: 'YOU WILL NOT SEE THE END OF THIS ___!\n";
	getline(cin >> ws, Q6c); Question6.DAY = Q6c;
	if (Q6c == "day" || Q6c == "DAY" || Q6c == "Day")
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "CORRECT +3 points!!\n";
		SCORE6C = 3.00;


	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE6C = 0.00;

	}

	if (Q6A == 8 && (Q6b == "baldur" || Q6b == "BALDUR" || Q6b == "Baldur") && (Q6c == "day" || Q6c == "Day" || Q6c == "DAY"))
	{
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got all them right and a streak going!" << endl;

		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "WHIFF MY HUMAN GASS U GOT 6 INA ROW!!" << endl;

		}
	}
	else
	{
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 7 (6 points). What mythology did the original GOW take place in?\n";
	getline(cin >> ws, Q7);
	if (Q7 == "GREEK" || Q7 == "Greek" || Q7 == "greek")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +6 points!!\n";
		SCORE7 = 6.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "INCORRECT +0 points." << endl;
		SCORE7 = 0.00;
		STREAK = 0.00;
	}
	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	cout << "Question 8 (5 points each, MUST GET ALL CORRECT TO CONTINUE STREAK)." << endl << " Put these bosses death in order from first  to last by putting the number associated with that choice.\n";
	cout << " Type the number of your choice and click 'enter', YOU WILL NOT BE ABLE TO CHANGE YOUR ANSWER ONCE IT IS ENTERED SO BE CAREFUL (Example, 1 'enter', 2 'enter'.)\n";
	cout << "Preview:\n" << "1 'enter'\n" << "2 'enter'\n" << "3 'enter'\n" << "4 'enter'\n";
	cout << "(1).Poseidon \n" << "(2). Odin \n" << "(3). Colossus of Rhodes\n" << "(4). Zeus\n";
	while (!(cin >> Q8A))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8B))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8C))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}
	while (!(cin >> Q8D))
	{
		cout << "Please enter a number!\n";
		cin.clear();
		cin.ignore();

	}

	if (Q8A == 3 && Q8B == 1 && Q8C == 4 && Q8D == 2)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "YOU GOT ALL CORRECT!! +20 points\n";
		SCORE8 = 20.00;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
	}
	else if ((Q8A != 3 && Q8B == 1 && Q8C == 4 && Q8D == 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D == 2) || (Q8A == 3 && Q8B == 1 && Q8C != 4 && Q8D == 2) || (Q8A == 3 && Q8B == 1 && Q8C == 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "THREE OUTTA FOUR CORRECT +15 points!!\n";
		SCORE8 = 15.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C == 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C != 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C != 4 && Q8D == 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C == 4 && Q8D != 2) || (Q8A == 3 && Q8B == 1 && Q8C != 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY HALF RIGHT +10 points!!\n";
		SCORE8 = 10.00;
		STREAK = 0.00;
	}
	else if ((Q8A != 3 && Q8B != 1 && Q8C != 4 && Q8D == 2) || (Q8A != 3 && Q8B == 1 && Q8C != 4 && Q8D != 2) || (Q8A == 3 && Q8B != 1 && Q8C != 4 && Q8D != 2) || (Q8A != 3 && Q8B != 1 && Q8C == 4 && Q8D != 2))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "ONLY ONE RIGHT 5 points!!\n";
		SCORE8 = 5.00;
		STREAK = 0.00;
	}
	else if (Q8A != 3 && Q8B != 1 && Q8C != 4 && Q8D != 2)
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "ALL WRONG +0 points!!\n";
		SCORE8 = 0.00;
		STREAK = 0.00;
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	SetConsoleTextAttribute(h, 7);
	system("cls"); cout << endl;
	CURRENTSCORE = SCORE1 + SCORE2 + SCORE3 + SCORE4a + SCORE4b + SCORE5 + SCORE6a + SCORE6B + SCORE6C + SCORE7 + SCORE8;
	string Q9WAGER;
	cout << "Question 9. WAGER!!! Your cuurent score is " << CURRENTSCORE << "." << endl;
	if (CURRENTSCORE == 0)
	{
		float WAGERCHOICE;
		char Q9;
		cout << "Unfortunatley, you do not have any points to wager, however I will give a choice.\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7);
		system("cls"); cout << endl;
		cout << "Would you like to attempt to answer Question 9 and if answered correctly, you will gain 50 POINTS!!\n";
		cout << "However, if you get it wrong, you will automacially fail the quiz and will be exited out of the quiz\n";
		cout << "If you choose not to do so, you will simply just skip question 9 and proceed with the quiz with ur currentscore\n";
		cout << "Enter 1 to WAGER and 2 to SKIP   "; cout << endl; cin >> WAGERCHOICE;
		system("cls"); cout << endl;
		if (WAGERCHOICE == 1)
		{
			cout << "ALRIGHT, HERE IS QUESTION 9. (just put the letter of the answer you choose) From which character did Kratos rip and took the wings of?.\n";
			cout << "A. ICARUS	B. ZELOS	C. EROS	D. APHRODITE	E. NONE OF THE ABOVE\n";
			cin >> Q9;
			if (Q9 == 'a' || Q9 == 'A')
			{
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "CORRECT!! NOW YOUR BACK IN THE GAME +50 POINTS!!\n";
				SCORE9 = 50.00;
				STREAK++;
			}

			else
			{

				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "WRONG ";  GAMEOVER(); exit(0);
				SCORE9 = 0.00;
				STREAK = 0;
			}

		}
		else if (WAGERCHOICE == 2)
		{
			cout << "Taking your chances and proceeding with the quiz, on with the rest of the quiz\n";
			SCORE9 = 0.00;
		}


	}

	if (CURRENTSCORE > 1)
	{


		cout << "Please enter the amount you would like to wager (1-" << CURRENTSCORE << ")." << endl;
		cin >> WAGER;

		for (WAGER; WAGER == 0;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER > CURRENTSCORE;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}


		for (WAGER; WAGER > CURRENTSCORE;)
		{
			cout << "You must wager any from 1-" << CURRENTSCORE << endl;
			cin >> WAGER;

			for (WAGER; WAGER == 0;)
			{
				cout << "You must wager any from 1-" << CURRENTSCORE << endl;
				cin >> WAGER;
			}

		}

		cout << "You are wagering "; HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 18);
		cout << WAGER;
		SetConsoleTextAttribute(h, 7); cout << " points." << endl;
		SetConsoleTextAttribute(h, 14); system("pause");
		SetConsoleTextAttribute(h, 7); system("cls"); cout << endl; cout << "Question 9. Fill in the blank of the name of the sisters in GOW Ascension, the ______\n";
		getline(cin >> ws, Q9WAGER);

		if (Q9WAGER == "FURIES" || Q9WAGER == "Furies" || Q9WAGER == "furies")
		{

			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct ";
			SetConsoleTextAttribute(h, 18); cout << "+" << WAGER;
			SetConsoleTextAttribute(h, 7); cout << " points!!\n";
			SCORE9 = WAGER;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}
			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect -" << WAGER << " points!!\n";
			SCORE9 = -WAGER;
			STREAK = 0;
		}
	}

	SetConsoleTextAttribute(h, 14);
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	cout << "Question 10. You will have three tries to answer this question and will be rewarded with answering the question correct on the least amount of atte-mpts. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	system("cls"); cout << endl;
	SetConsoleTextAttribute(h, 7);
	for (int x = 1; x <= 3; x++)
	{
		cout << "Whos is the God of War in Norse mythology?";
		cout << " (A) Kratos		(B) Ares		(C) Tyir		(D) Odin		(E) Helios		(F) Mimir\n";
		cin >> Q10;
		system("cls"); cout << endl;


		if (Q10 == 'c' || Q10 == 'C')
		{

			if (x == 1)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +30 points!\n";
				SCORE10 = 30;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;

			}
			else if (x == 2)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +20 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 20;
				STREAK = 0;
			}
			else if (x == 3)
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +10 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE10 = 10;
				STREAK = 0;
			}

			break;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE10 = 0;
			STREAK = 0;


		}
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "Question 11 (10 points). Which two were not a boss in GOW Ragnarok\n";
	cout << "(A) Thor and Baldur		(B) Heimdall and Forest Ancient\n";
	cout << "(C) Zeus and Hades		(D) Odin and the Huntress\n";
	cout << "(E) Both b and c		(F) Both c and d\n";
	cout << "(G) Both b and d		(H) None of the above\n";
	cin >> Q11; cout << endl;
	if (Q11 == 'G' || Q11 == 'g')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +10 points!\n";
		SCORE11 = 10;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE11 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 12 (5 points) TRUE/FALSE. ";
	cout << "Kratos becomes the God of Hope.\n";
	getline(cin >> ws, Q12); cout << endl;
	if (Q12 == "true" || Q12 == "TRUE" || Q12 == "True" || Q12 == "T" || Q12 == "t" || Q12 == "YES" || Q12 == "yes" || Q12 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +5 points!\n";
		SCORE12 = 5;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;

	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE12 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 13, 14, and 15 will be presented differently. If you get Question 13 correct, it will continue to Question 14 and so on.\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "However, if you get Question 13 wrong, you will not have the oppurtunity to answer Questions 14 and 15, same will be said with Question 14. Must get all right to contiune streak. GOODLUCK!!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 13 (7 points) TRUE/FALSE. Zesus dies in GOW 2.\n";
	getline(cin >> ws, Q13);
	if (Q13 == "false" || Q13 == "False" || Q13 == "FALSE" || Q13 == "f" || Q13 == "F" || Q13 == "NO" || Q13 == "no" || Q13 == "No")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +7 points!\n";
		SCORE13 = 7;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
		cout << "Question 14 (5 points). Which character does Odin kill in GOW Ragnarok?\n";
		cout << "(A) Kratos		(B) Sindri		(C) Heimdall		(D) Brok\n";
		cin >> Q14;
		if (Q14 == 'd' || Q14 == 'D')
		{
			SetConsoleTextAttribute(h, 10); cout << endl;
			cout << "Correct +5 points!\n";
			SCORE14 = 5;
			STREAK++;
			if (streak2(STREAK) == 2)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
			}

			else if (streak6(STREAK) == 6)
			{

				SetConsoleTextAttribute(h, 11);
				cout << "SIX IN A ROW!!!" << endl;
			}
			else if (streak10(STREAK) == 10)
			{
				SetConsoleTextAttribute(h, 11);
				cout << "TEN IN A ROW!!!" << endl;
			}
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			system("cls"); cout << endl;
			cout << "Question 15 (8 points). During the Great War of the Titans against Zeus, who nwas considered the king of the titans?\n";
			getline(cin >> ws, Q15);
			if (Q15 == "ATLAS" || Q15 == "atlas" || Q15 == "Atlas")
			{
				SetConsoleTextAttribute(h, 10); cout << endl;
				cout << "Correct +8 points!\n";
				SCORE15 = 8;
				STREAK++;
				if (streak2(STREAK) == 2)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
				}

				else if (streak6(STREAK) == 6)
				{

					SetConsoleTextAttribute(h, 11);
					cout << "SIX IN A ROW!!!" << endl;
				}
				else if (streak10(STREAK) == 10)
				{
					SetConsoleTextAttribute(h, 11);
					cout << "TEN IN A ROW!!!" << endl;
				}
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				system("cls"); cout << endl;
			}
			else
			{
				SetConsoleTextAttribute(h, 12); cout << endl;
				cout << "Incorrect +0 points!\n";
				SetConsoleTextAttribute(h, 14); cout << endl;
				system("pause");
				SetConsoleTextAttribute(h, 7); cout << endl;
				SCORE15 = 0;
				STREAK = 0;
			}
			system("cls"); cout << endl;
		}
		else
		{

			SetConsoleTextAttribute(h, 12); cout << endl;
			cout << "Incorrect +0 points!\n";
			SetConsoleTextAttribute(h, 14); cout << endl;
			system("pause");
			SetConsoleTextAttribute(h, 7); cout << endl;
			SCORE14 = 0;
			SCORE15 = 0;
			STREAK = 0;

		}
	}
	else
	{

		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE13 = 0;
		SCORE14 = 0;
		SCORE15 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "For Questions 16, 17, 18, and 19, each question will be worth 1+ points, however their is a twist!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "For each question you get correct in a row, a x2 mulitplier will be added until that streak is broken. GOODLUCK!!\n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 16 TRUE/FALSE. Atreus is also known as Loki.\n";
	getline(cin >> ws, Q16);
	if (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes")
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE16 = 1;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE16 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "Question 17. Which character is known as the person that can not get hit? \n";
	cout << "(A) ZEUS	(B) THOR	(C) HADES	(D) NONE OF THE ABOVE\n";
	cin >> Q17;
	if ((Q17 == 'd' || Q17 == 'D') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE17 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if (Q17 == 'd' || Q17 == 'D')
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE17 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE17 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 18.What is the choice of weapon Atreus uses?\n";
	cout << "(A) Axe	(B) Bow and Arrow	(C) Sword	(D) No weapons \n";
	cin >> Q18;
	if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'd' || Q17 == 'D') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE18 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q17 == 'd' || Q17 == 'D'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE18 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if (Q18 == 'b' || Q18 == 'B')
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +1 points!\n";
		SCORE18 = 1;
		STREAK++;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE18 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;
	cout << "Question 19. In which GOW did Kratos kill the sisters of fate?\n";
	cout << "(A) GOW ASCENSION	(B) GOW 1 ORIGNAL	(C) GOW 2	(D) None of the Above\n";
	cin >> Q19;
	if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'D' || Q17 == 'd') && (Q16 == "TRUE" || Q16 == "True" || Q16 == "true" || Q16 == "t" || Q16 == "T" || Q16 == "YES" || Q16 == "yes" || Q16 == "Yes"))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +8 points!\n";
		SCORE19 = 8;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}

		else if (streak6(STREAK) == 6)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "SIX IN A ROW!!!" << endl;
		}
		else if (streak10(STREAK) == 10)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "TEN IN A ROW!!!" << endl;
		}
		else if (streak16(STREAK) == 16)
		{
			SetConsoleTextAttribute(h, 11);
			cout << "LET'S FUCKIN GOOOOO, WATTA STREAK!!!" << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;

	}
	else if ((Q19 == 'c' || Q19 == 'C') && (Q18 == 'b' || Q18 == 'B') && (Q17 == 'd' || Q17 == 'D'))
	{
		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +4 points!\n";
		SCORE19 = 4;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else if ((Q18 == 'b' || Q18 == 'B') && (Q19 == 'c' || Q19 == 'C'))
	{

		SetConsoleTextAttribute(h, 10); cout << endl;
		cout << "Correct +2 points!\n";
		SCORE19 = 2;
		STREAK++;
		if (streak2(STREAK) == 2)
		{

			SetConsoleTextAttribute(h, 11);
			cout << "CONGRATS! You got yourself a little streak, keep it up." << endl;
		}
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}

	else
	{
		SetConsoleTextAttribute(h, 12); cout << endl;
		cout << "Incorrect +0 points!\n";
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		SCORE19 = 0;
		STREAK = 0;
	}
	system("cls"); cout << endl;

	cout << "You have made it to the end of the Quiz!!!! Last question. \n";
	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "Question 20. Did you enjoy the quiz, type YES or NO.\n";
	cin >> Q20;
	if (Q20 == "YES" || Q20 == "yes" || Q20 == "Yes")
	{
		cout << "FUCKIN LETS GOOOOO, take some juicy succulent points (+10 points).\n";
		SCORE20 = 10;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	else
	{
		cout << "Well shit\n";
		SCORE20 = 0;
		SetConsoleTextAttribute(h, 14); cout << endl;
		system("pause");
		SetConsoleTextAttribute(h, 7); cout << endl;
		system("cls"); cout << endl;
	}
	system("cls"); cout << endl;
	cout << "CONGRATZZZZ YOU DONEEEE!! Here are your final results:\n"; cout << endl;
	FINALSCORE = CURRENTSCORE + SCORE9 + SCORE10 + SCORE11 + SCORE12 + SCORE13 + SCORE14 + SCORE15 + SCORE16 + SCORE17 + SCORE18 + SCORE19 + SCORE20;
	cout << "Your total score: " << FINALSCORE << "/230"; cout << endl;


	SetConsoleTextAttribute(h, 14); cout << endl;
	system("pause");
	SetConsoleTextAttribute(h, 7); cout << endl;
	system("cls"); cout << endl;
	cout << "If you would like to go back to the menu to take another quiz, enter 1, if you wnna exit, enter 0\n";
	cin >> BACKMENU;
	if (BACKMENU == 1)
	{

		instructions(); cout << endl; string n1;

		cout << "Please enter your username\n"; getline(cin, n1); cout << endl;
		system("cls"); cout << endl;
		Welcome(n1);
		menu1();
	}
	else
	{
		cout << "GOODBYE!!!";
		exit(0);
	}
}
int GAMEOVER()
{
	cout << "GAMEOVER!!!\n";
	return 0;

}
//for streak make functions for each streak rwo and you will have to put it in each if stament 
float streak2(float x)
{
	return x;
}
float streak6(float y)
{
	return y;
}
float streak10(float z)
{
	return z;
}
float streak16(float a)
{
	return a;
}