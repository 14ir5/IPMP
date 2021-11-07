/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
 void leftRotatebyOne(int a[], int n)
{
    int temp = a[0], i;
    for (i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
 
    a[n-1] = temp;
}
int main()
{
    int sum=0,a[100],n,rt;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    cout<<"enter no.of rotation:";
    cin>>rt;
    int k=0;
    
        for (int i = 0; i < rt; i++)
            leftRotatebyOne(a, n);
    
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
