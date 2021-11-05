/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,j,a[100],temp;
   cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        j=rand()%n;
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
    }
    return 0;
}
