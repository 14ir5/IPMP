/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

float findWater(int i, int j, float X)
{
	if (j > i)
	{
		cout<<"Incorrect Input";
		exit(0);
	}

	
	float glass[i * (i + 1) / 2];

	
	for(int k=0;k<(i*(i+1))/2;k++)
	glass[k]=0;

	int index = 0;
	glass[index] = X;
	for (int row = 1; row <= i ; ++row)
	{
	
		for (int col = 1; col <= row; ++col, ++index)
		{
			
			X = glass[index];
			glass[index] = (X >= 1.0f) ? 1.0f : X;
			X = (X >= 1.0f) ? (X - 1) : 0.0f;
			glass[index + row] += X / 2;
			glass[index + row + 1] += X / 2;
		}
	}
	return glass[i*(i-1)/2 + j - 1];
}

int main()
{
    int i,j;
    float tw;
    cout<<"enter total amount of water pouring:";
    cin>>tw;
    cout<<"enter row no (i):";
    cin>>i;
    cout<<"enter glass number(j)(<=i)";
    cin>>j;
    

	cout<<"Amount of water in jth glass of ith row is:"<<findWater(i, j, tw);

	return 0;
}

