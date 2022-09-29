#include <iostream>
#include <conio.h>
#include<ctime>
#include<cstdlib>

using namespace std;

char aray[10] = { 'o','1','2','3','4','5','6','7','8','9' };

void humanvscomputer()
{
	srand(time(0));
	int check();
	void Display();
	int player = 1, i, choice;

	char mark;
	do
	{
		Display();

		if (player % 2 == 1)
			player = 1;
		else
			player = 2;

		// player 2
		if (player == 2)
		{
			cout << "\n\n\t   Press enter for Computer" << endl;
			choice = rand() % 9;
			mark = 'O';
			int turn = 1;
			int placed = 0;
			while (placed == 0)
			{
				if (choice == 1 && aray[1] == '1') {
					aray[1] = mark;
					placed = 1;
				}
				else if (choice == 2 && aray[2] == '2') {
					aray[2] = mark;
					placed = 1;
				}
				else if (choice == 3 && aray[3] == '3') {
					aray[3] = mark;
					placed = 1;
				}
				else if (choice == 4 && aray[4] == '4') {
					placed = 1;
					aray[4] = mark;
				}
				else if (choice == 5 && aray[5] == '5') {
					aray[5] = mark;
					placed = 1;
				}
				else if (choice == 6 && aray[6] == '6') {
					aray[6] = mark;
					placed = 1;
				}
				else if (choice == 7 && aray[7] == '7') {
					aray[7] = mark;
					placed = 1;
				}
				else if (choice == 8 && aray[8] == '8') {
					aray[8] = mark;
					placed = 1;
				}
				else if (choice == 9 && aray[9] == '9') {
					aray[9] = mark;
					placed = 1;
				}
				else
				{
					choice = (rand() % 9) + 1;
				}
			}
			i = check();
			player++;
			_getche();
			Display();
		}
		// player 1
		else if (player == 1)
		{
			cout << "\n\n\t  Player, enter a number : ";
			cin >> choice;
			mark = 'X';

			if (choice == 1 && aray[1] == '1')
				aray[1] = mark;
			else if (choice == 2 && aray[2] == '2')
				aray[2] = mark;
			else if (choice == 3 && aray[3] == '3')
				aray[3] = mark;
			else if (choice == 4 && aray[4] == '4')
				aray[4] = mark;
			else if (choice == 5 && aray[5] == '5')
				aray[5] = mark;
			else if (choice == 6 && aray[6] == '6')
				aray[6] = mark;
			else if (choice == 7 && aray[7] == '7')
				aray[7] = mark;
			else if (choice == 8 && aray[8] == '8')
				aray[8] = mark;
			else if (choice == 9 && aray[9] == '9')
				aray[9] = mark;
			else
			{
				cout << "\n  Invalid move, Press enter to add value again.";

				player--;
				_getche();
			}
			i = check();

			player++;
		}
	} while (i == -1);
	Display();
	system("color 0A");
	if (i == 1)
		cout << "\n\n\t        Congratulation! \n\n\t\t Player " << --player << " wins\n\n\n ";
	else
		cout << "\n\n\t       ***GAME DRAW***\n\n";
}

void Display()
{
	system("cls");
	cout << "\n     ";
	for (int i = 1; i <= 19; ++i)  // print * in horizontal line.
	{
		cout << "* ";
	}
	cout << endl;
	{
		cout << "     * \t\t\t\t         *" << endl;
		cout << "     *        *******************        *" << endl;
		cout << "     *            Tic Tac Toe            *\n";
		cout << "     *        *******************        *   \t" << endl;
		cout << "     *                                   *\n";
		cout << "     *   Player  (X)  VS  Computer (O)   *\n";

		cout << "     *    ---------------------------    *\n";
		cout << "     *                                   *\n";
		cout << "     *            ___ ___ ___            *" << endl;
		cout << "     *           |   |   |   |           *" << endl;
		cout << "     *           | " << aray[1] << " | " << aray[2] << " | " << aray[3] << " |           *" << endl;

		cout << "     *           |___|___|___|           *" << endl;
		cout << "     *           |   |   |   |           *                                                            " << endl;

		cout << "     *           | " << aray[4] << " | " << aray[5] << " | " << aray[6] << " |           *" << endl;

		cout << "     *           |___|___|___|           *                                                             " << endl;
		cout << "     *           |   |   |   |           *" << endl;
		cout << "     *           | " << aray[7] << " | " << aray[8] << " | " << aray[9] << " |           *" << endl;
		cout << "     *           |___|___|___|           *" << endl;
		cout << "     *                                   *";
		cout << "\n     ";
		for (int i = 1; i <= 19; ++i)  // print * in horizontal line.
		{
			cout << "* ";
		}
	}
}
int check()
{
	if (aray[1] == aray[2] && aray[2] == aray[3])
		return 1;
	else if (aray[4] == aray[5] && aray[5] == aray[6])
		return 1;
	else if (aray[7] == aray[8] && aray[8] == aray[9])
		return 1;
	else if (aray[1] == aray[4] && aray[4] == aray[7])
		return 1;
	else if (aray[2] == aray[5] && aray[5] == aray[8])
		return 1;
	else if (aray[3] == aray[6] && aray[6] == aray[9])
		return 1;
	else if (aray[1] == aray[5] && aray[5] == aray[9])
		return 1;
	else if (aray[3] == aray[5] && aray[5] == aray[7])
		return 1;
	else if (aray[1] != '1' && aray[2] != '2' && aray[3] != '3'
		&& aray[4] != '4' && aray[5] != '5' && aray[6] != '6'
		&& aray[7] != '7' && aray[8] != '8' && aray[9] != '9')
		return 0;
	else
		return -1;
}

void humanvshuman()
{
	int check();
	void display();
	int player = 1, g, choice;
	char mark;
	do
	{
		display();
		player = (player % 2) ? 1 : 2;
		cout << "\n\n\t  Player " << player << ", enter a number : ";
		cin >> choice;
		mark = (player == 1) ? 'X' : 'O';
		if (choice == 1 && aray[1] == '1')
			aray[1] = mark;
		else if (choice == 2 && aray[2] == '2')
			aray[2] = mark;
		else if (choice == 3 && aray[3] == '3')
			aray[3] = mark;
		else if (choice == 4 && aray[4] == '4')
			aray[4] = mark;
		else if (choice == 5 && aray[5] == '5')
			aray[5] = mark;
		else if (choice == 6 && aray[6] == '6')
			aray[6] = mark;
		else if (choice == 7 && aray[7] == '7')
			aray[7] = mark;
		else if (choice == 8 && aray[8] == '8')
			aray[8] = mark;
		else if (choice == 9 && aray[9] == '9')
			aray[9] = mark;
		else
		{
			cout << "\n  Invalid move, Press enter to add value again.";
			player--;
			cin.ignore();
			cin.get();
			_getche();
		}
		g = check();
		player++;

	} while (g == -1);
	display();
	system("color 0A");
	if (g == 1)
	{
		cout << "\n\n\t        Congratulation! \n\n\t\t Player " << --player << " wins\n\n\n ";
	}
	else
		cout << "\n\n\t       ***GAME DRAW***\n\n";
}
void display()
{
	system("cls");

	cout << "\n     ";
	for (int i = 1; i <= 19; ++i) { // print * in horizontal line.
		cout << "* ";
	}
	cout << endl;
	{
		cout << "     * \t\t\t\t         *" << endl;
		cout << "     *        *******************        *" << endl;
		cout << "     *            Tic Tac Toe            *\n";
		cout << "     *        *******************        *   \t" << endl;
		cout << "     *                                   *\n";
		cout << "     *   Player 1 (X)  VS  Player 2 (O)  *\n";

		cout << "     *    ---------------------------    *\n";
		cout << "     *                                   *\n";
		cout << "     *            ___ ___ ___            *" << endl;
		cout << "     *           |   |   |   |           *" << endl;
		cout << "     *           | " << aray[1] << " | " << aray[2] << " | " << aray[3] << " |           *" << endl;
		cout << "     *           |___|___|___|           *" << endl;
		cout << "     *           |   |   |   |           *                                                            " << endl;
		cout << "     *           | " << aray[4] << " | " << aray[5] << " | " << aray[6] << " |           *" << endl;
		cout << "     *           |___|___|___|           *                                                             " << endl;
		cout << "     *           |   |   |   |           *" << endl;
		cout << "     *           | " << aray[7] << " | " << aray[8] << " | " << aray[9] << " |           *" << endl;
		cout << "     *           |___|___|___|           *" << endl;
		cout << "     *                                   *";
		cout << "\n     ";
		for (int i = 1; i <= 19; ++i)  // print * in horizontal line.
		{
			cout << "* ";
		}
	}
}

int main() {
	int a;
	cout << "\n\t      *******************" << endl;
	cout << "\t          Tic Tac Toe     \n";
	cout << "\t      *******************\t" << endl;
	cout << "\n\t=> Select the mode you want to play : \n";
	cout << "\n\t1) PLAYER VS COMPUTER\n\n\t2) PLAYER 1 VS PLAYER 2 \n\n\t";
	cin >> a;
	if (a == 1) {
		humanvscomputer();
	}
	else {
		humanvshuman();
	}
}
