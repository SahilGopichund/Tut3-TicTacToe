#include "TicTacToe.h"
#include<iostream>
using namespace std;


/*void restart(int flag);
void move(int pos);
void print();
bool isWon(void);
void makeBoard();
*/


TicTacToe::TicTacToe(int i)
{
	for (int i = 1; i <4; i++)
	{
		for (int j = 1; j <4; j++)
		{
			arrPos[i][j] = "*";

		}//for j
		
	}//for i

}//cosntructor


void TicTacToe::restart(int flag)
{

}//restart


void TicTacToe::move(int pos,int player)
{
	
}//move


void TicTacToe::print()
{
	for (int i = 1; i <4; i++)
	{
		for (int j = 1; j <4; j++)
		{
			cout << arrPos[i][j] << "    ";
			
		}//for j
		cout << "\n\n";
	}//for i


}//print

bool TicTacToe::isWon()
{
	return false;
}//isWon

void TicTacToe::makeBoard()
{
	int temp = 1;



	cout << "Board layout: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << temp<< "    ";
			temp++;
		}//for j
		cout << "\n\n";
	}//for i

	cout << "When playing, press the number corresponding to the position in which you want to place your X - player 1, O - Player 2 ";
}//makeBoard

void TicTacToe::play()
{
	int temp; 
	cout << "Player 1 is:  X\n" << "Player 2 is:  O\n";

	cout << "Please enter position player 1";
	cin >> temp;
	setPosition(temp,1);

	cout << "Please enter position player 1";
	cin >> temp;
	setPosition(temp, 2);





}//paly

void TicTacToe::setPosition(int k,int player)
{
	string playerChar;
	if (player == 1)
	{
		playerChar = "X";
	}//if
	else
	{
		playerChar = "O";
	}//else

	if (k < 3)
	{
		arrPos[1][k] = playerChar;
	}//if
	else if (k > 3 && k < 6)
	{
		arrPos[2][k] = playerChar;
	}//elseIf
	else
	{
		arrPos[3][k] = playerChar;
	}//else
	print();
}