/**********************************************
* Name: Adnan Hayat   				*
* University: FAST-NUCES			*
* Major: Computer Science			*
* Program details:		  		*
*			 			*
*			   			*							
***********************************************/


#include<iostream>
using namespace std;

int main()
{

int gamematrix[5][8];
int tempmatrix[5][8]; //To store original matrix and comparing game matrix with temp matrix to make changes to produce processed game.
srand(time(0));

for(int i = 0; i<5; i++) //generating random numbers (1 or 0)
{

	for(int j = 0; j<8; j++)
	{
	
		gamematrix[i][j] = rand() % 2;
	
	}


}

cout << "\nINITIAL GAME MATRIX: " << endl; //Printing initial matrix
for(int i = 0; i<5; i++)
{

	for(int j = 0; j<8; j++)
	{
	
		cout << "   " << gamematrix[i][j] << "   ";

	}
	cout << endl;

}

for(int i = 0; i<5; i++) //Storing gamematrix in tempmatrix
{

	for(int j = 0; j<8; j++)
	{
	
		tempmatrix[i][j] = gamematrix[i][j];

	}

}


for(int i = 0; i<5; i++)
{

	for(int j = 0; j<8; j++)
	{
		if(i == 0 || i == 4) 
		{
		
			if(i == 0 && j == 0) //setting cornerpoint values first
			{		
				if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] == 3)
					gamematrix[i][j] = 1;
				else if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] < 2)
					gamematrix[i][j] = 0; 

			}
			else if(i == 4 && j == 0) //setting cornerpoint values first
			{
			
				if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] == 3)
					gamematrix[i][j] = 1;
				else if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] < 2)
					gamematrix[i][j] = 0;
			
			}
			else if(i == 0 && j == 7) //setting cornerpoint values first
			{		
				if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] == 3)
					gamematrix[i][j] = 1;
				else if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] < 2)
					gamematrix[i][j] = 0; 

			}
			else if(i == 4  && j == 7) //setting cornerpoint values first
			{		
				if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] == 3)
					gamematrix[i][j] = 1;
				else if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] < 2)
					gamematrix[i][j] = 0; 

			}
			if((i == 0) && (j > 0 && j < 7 )) //setting top mid vals
			{
				
				if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i][j+1] + tempmatrix[i+1][j+1] < 2)
					gamematrix[i][j] = 0;
				else if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i][j+1] + tempmatrix[i+1][j+1] == 3 || tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i][j+1] + tempmatrix[i+1][j+1] == 4 )
					gamematrix[i][j] = 1;

				
			}
			else if((i == 4) && (j > 0 && j < 7)) //setting bottom mid vals
			{
				 				
				if(tempmatrix[i][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] < 2)
					gamematrix[i][j] = 0;
				else if(tempmatrix[i][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] == 3 || tempmatrix[i][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] == 4 )
					gamematrix[i][j] = 1;
				
			}
			
		}
		else if(i > 0 && i < 4)
		{
		
			if(j == 0) //setting mid vals in first coloumn
			{		
				if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j+1] < 2)
					gamematrix[i][j] = 0; //checking if 2
				else if(tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j+1] == 3 || tempmatrix[i][j+1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j+1] == 4) //checking if 3 or 4
					gamematrix[i][j] = 1; 

			}
			else if(j == 7) //setting mid vals in last coloumn
			{		
				if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] < 2)
					gamematrix[i][j] = 0; //checking if 2
				else if(tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] == 3 || tempmatrix[i][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j-1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1] == 4) //checking if 3 or 4
					gamematrix[i][j] = 1; 

			}		
		
			else if(j>0 && j<7) //setting vals for all mid values
			{
				
				if( (tempmatrix[i][j-1] + tempmatrix[i+1][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1]) == 3 || (tempmatrix[i][j-1] + tempmatrix[i+1][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1]) == 4 ) //checking if 3 or 4

					gamematrix[i][j] = 1;

				else if((tempmatrix[i][j-1] + tempmatrix[i+1][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1]) > 5) //checking more than 5	
					gamematrix[i][j] = 0;

				else if((tempmatrix[i][j-1] + tempmatrix[i+1][j-1] + tempmatrix[i+1][j] + tempmatrix[i+1][j+1] + tempmatrix[i][j+1] + tempmatrix[i-1][j+1] + tempmatrix[i-1][j] + tempmatrix[i-1][j-1]) < 2) // checking less than 2	
					gamematrix[i][j] = 0;

			}			
				
		}

	}

}


cout << "\nPROCESSED GAME MATRIX: " << endl;
for(int i = 0; i<5; i++)
{

	for(int j = 0; j<8; j++)
	{
	
		cout << "   " << gamematrix[i][j] << "   ";

	}
	cout << endl;

}


return 0;
}
