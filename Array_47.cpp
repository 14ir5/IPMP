/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,k,count,flag=0;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        count=1;
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i])
            count++;
        }
        if(count>n/2){
        cout<<a[i]<<" repeats "<<count<< "times";
        flag=1;
        }
    }
    if(flag==0)
    cout<<"no majority element";

    return 0;
}
