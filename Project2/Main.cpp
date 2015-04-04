#include <iostream>
#include <string>
#include "TicTacToe.h"
using namespace std;
int main()
{
	TicTacToe myGame(1);
	int choice = -1;
	
	
		cout << "1. Start New Game\n";
		cout << "2. Exit Game\n";
		cout << "-------------------\n";
		cout << "Please select an option. . .\n";
		cin >> choice;
	
		if (choice == 1)
		{
			myGame.makeBoard();
			myGame.play();


		}//if
		else
		{
			system("exit");
		}



	//myGame.makeBoard();
	system("pause");



}