//lehlohonolo macheru
//Sudoku game functions
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<fstream>
#include "header.h"
using namespace std;
void game::outboard(int arrayy[9][9],char arr[9][9])

{
        cout<< setfill(' ');
        cout<<setw(30)<<"Sudoku Game "<<endl;
        cout<<endl;

        for(int i=0; i<9; i++)
        {
                for(int j=0; j<9; j++)
                {
                        if(arrayy[i][j]==0)
                        {
                                arr[i][j]=arrayy[i][j];//when the opend file contains No 0 it converts my int arry to 
						       //char arry so that i replace the number 0 with an empty space
                        }
                        arr[i][j]=' ';//No 0 is replaced by a space

        }
        }
        cout<<setw(3)<<"      1   2   3   4   5   6   7   8   9"<<endl;
        //cout<<setw(3)<<"    ------------+-----------+------------"<<endl;

        for(int i=0; i<9; i++)
        {
                cout<<i+1<<"-"<<setw(3);
                for(int j=0; j<9; j++)
                {
                        if(arrayy[i][j]==0)
                                cout<<"|"<<" "<<arr[i][j]<<" ";
                        else
                                cout<<"|"<<" "<<arrayy[i][j]<<" ";
                }
                cout<<"|";
                cout<<endl;
        cout<<setw(3)<<"    ------------+-----------+------------"<<endl;
	}
        cout<<endl<<endl;
}
void game::play(int arrayy[9][9],char arr[9][9],int& column , int& row, int& number)
{

	int count=0;
	for(int i=0; i<9; i++)
	{
		for(int j=0; j<9; j++)
		{
			if(arrayy[i][j]==0)
				count++;
		}
	}

	int z;
	while(count!=0)
	{
		z=0;
		cout<<"choose the square by enter the row number then space then the column number e.g[4 9]..."<<endl;
		cin>>row>>column;
		row=row-1;
		column=column-1;
		count=0;
		if(arrayy[row][column]==0)
		{
		if((column>=0 && column<9) && (row>=0 && row<9))
		{
			cout<<"Please add number...."<<endl;
			cin>>number;
			if(number>0 && number<10)
			{
				for(int i=0; i<9; i++)
				{
					if(arrayy[row][i]==number)
					{
						z=1;
						cout<<"number "<<number <<" already exists in row..."<<endl<<endl;
						break;
					}
					else if (arrayy[i][column]==number)
					{
						z=1;
						cout<<"number "<<number <<"already exists in column..."<<endl<<endl;
						break;
					}
					{

					}

				}

				
				if(row<=2 && column<=2)
                                
				{
                                for(int i=0; i<=2; i++)
                                {
		           	     for(int j=0; j<=2; j++)
        		   		     {
               					 if(arrayy[i][j]==number)
                                                {
                                                    z=1;
                                                    cout<< number <<" already exists in square 1..."<<endl<<endl;
                                                    break;
                                                }
                                       	     }
        			        }
				}



				if(row<=2 && (column>2 && column<6))
				{
				for(int i=0; i<=2; i++)
				{
					for(int j=3; j<=5; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square 2..."<<endl<<endl;
						    break;
						}
					}			

				}
				}

				if(row<=2 && (column>5 && column <9))
				{
				for(int i=0; i<=2; i++)
				{
					for(int j=6; j<=8; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square 3..."<<endl<<endl;
						   break;
						}
					}
			

				}
				}
				if((row>2 && row<6) && (column <=2))
				{
				for(int i=3; i<=5; i++)

				{
					for(int j=0; j<=2; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square number 4..."<<endl<<endl;
						    break;
						}
					}
				}

				}


				if((row>2 && row<6) && (column >2 && column<6))
				{
				for(int i=3; i<=5; i++)
				{
					for(int j=3; j<=5; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square number 5..."<<endl<<endl;
						    break;
						}
					}
				}
				}

				if((row>2 && row<6)&&(column>5 &&column<9))
				{
				for(int i=3; i<=5; i++)
				{
					for(int j=6; j<=8; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square number 6..."<<endl<<endl;
						    break;
						}
					}
				}				
				}

				if((row>5 && row<9)&&(column<=2))
				{
				for(int i=6; i<=8; i++)
				{
					for(int j=0; j<=2; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
						    cout<<number <<" already exists in square number 7..."<<endl<<endl;
						    break;
						}
					}
				}
				}

				if((row>5 && row<9)&&(column>2 && column<6))
				{
				for(int i=6; i<=8; i++)
				{
					for(int j=3; j<=5; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
							cout<<number <<" already exists in square number 8..."<<endl<<endl;
						    break;
						}
					}
				}
				}

				if((row>5 && row<9)&&(column>5 && column<9))
				{
				for(int i=6; i<=8; i++)
				{
					for(int j=6; j<=8; j++)
					{
						if(arrayy[i][j]==number)
						{
							z=1;
							cout<<number <<" already exists in square number 9..."<<endl<<endl;
						    break;
						}
					}
				}			
				}


				if(z!=1)
				{
					arrayy[row][column]=number;
				    outboard(arrayy,arr);
					cout<<"Success"<<endl;
					cout<<endl;
				}
			}

			else

			{
				cout<<"You have to enter from 1 to 9 in cell ..."<<endl;

            		}

		}
		if(number <= 48 && number >= 58)
		{
			cout<<"You have to enter from 1 to 9 in row and column ..."<<endl;
		}	
	}

	else

	{
		cout<<"There's a number in this cell already try an empty one`...."<<endl;
	}


	//counter loop that checks if the rows and columns are filled and verified correctly then the game stops
	for(int i=0; i<9; i++)
	    {
		for(int j=0; j<9; j++)
		{
			if(arrayy[i][j]==0)
				count++;
		}

	    }	

	if(count==0)
	{
		cout<<"                          "<<" YOU WIM "<<endl;

	}

    }
}
