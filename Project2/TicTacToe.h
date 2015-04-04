#pragma once
#include <string>
#ifndef TicTacToe_H
#define TicTacToe_H
using namespace std;
class TicTacToe
{

private:
	int pos=-1;
	string arrPos[4][4];
	


public:
	TicTacToe(int);
	void restart(int flag);
	void move(int pos,int player);
	void print();
	bool isWon(void);
	void makeBoard();
	void play();
	void setPosition(int k,int player);

};

#endif