/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int min(int a,int b){
    if(a<=b)
    return a;
    else
    return b;
}
int max(int a,int b){
    if(a>=b)
    return a;
    else
    return b;
}
int maxWater(int arr[], int n)
{
	
	
	int res = 0;
	
	
	for (int i = 1; i < n-1; i++) {
		
		
		int left = arr[i];
		for (int j=0; j<i; j++)
		left = max(left, arr[j]);
		
	
		int right = arr[i];
		for (int j=i+1; j<n; j++)
		right = max(right, arr[j]);
		

	res = res + (min(left, right) - arr[i]);
	}

	return res;
}


int main()
{
	int arr[] = {1,0,5,6,0,0,6,7,5,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << maxWater(arr, n);
	
	return 0;
}


