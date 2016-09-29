class game
{
protected:
	int x;
        int z=0;

public:
	int column;
	int row;
	int number;
	int Board[9][9];
        char cBoard[9][9];
	void outboard(int arrayy[9][9],char arr[9][9]);
	void play(int arrayy[9][9],char arr[9][9],int& column , int& row, int& number);
	void check(int arrayy[9][9],char arr[9][9],int& column , int& row, int& number);


};
