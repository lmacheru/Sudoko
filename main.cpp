//lehlohonolo macheru
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<fstream>
#include "header.h"
using namespace std;

int main()
{	
	
	char y,x;
	game b;
	ifstream Sudoku("Sudoku.txt");
	
	cout<<"    "<<"Welcome to Nolo's Sudoku Game "<<endl;
	cout<<endl;

	cout<<"Press ( b ) to show board game,( s ) to stop game"<<endl;
	cin>>y;
	

	if(y=='s')
	{
		cout<< "thank you for trying the Game "<<endl;
	exit(1);
	}

	cout<<endl<<endl;

	if(y=='b')
	{
		for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			Sudoku >> b.Board[i][j];
		}
	}	
	b.outboard(b.Board,b.cBoard);	
	cout<<"Press (P) to play the game ,and (c) change the board ";
	cin>>x;
	}

	while(x=='c')
	{
		for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			Sudoku >> b.Board[i][j];
		}
	}	

		b.outboard(b.Board,b.cBoard);
		cout<<"Press (P) to play the game ,and (c) change the board ";
	        cin>>x;

	}
	if(x=='p')

		b.play(b.Board,b.cBoard,b.column ,b.row,b.number);

	return 0;
	
}
