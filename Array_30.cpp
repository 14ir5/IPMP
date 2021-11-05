/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a[100],count=0,count2=0,n;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array elements{0,1,2}"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0)
        count++;
        if(a[i]==2)
        count2++;
    }
    for(int i=0;i<n;i++){
        if(i<(n-count2)){
             if(i<count)
            a[i]=0;
            else
            a[i]=1;
        }
        else
        a[i]=2;
        
    }
    
    cout<<"aray after seggregating 0 and 1"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    return 0;
}

