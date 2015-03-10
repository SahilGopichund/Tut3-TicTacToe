#pragma once
#ifndef TicTacToe_H
#define TicTacToe_H
class TicTacToe
{

private:




public:
	TicTacToe();
	~TicTacToe();

	void restart(int flag);
	void move(int pos);
	void print();
	bool isWon(void);
	void makeBoard();


};

#endif