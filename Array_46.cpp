/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,k=0,count,flag=0,sum=0,max=0,n1,n2,b[100];
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    int incl = a[0];
    int excl = 0;
    int excl_new;
    int i;
    for (i = 1; i < n; i++)
    {
        
        excl_new = (incl > excl) ? incl : excl;
        incl = excl + a[i];
        excl = excl_new;
    }
    sum=(incl > excl) ? incl : excl;
    cout<<"sum="<<sum;
    return 0;
}
