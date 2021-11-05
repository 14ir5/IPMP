/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[10]={0,1,0,0,1,1,0,1,0,1},count=0;
    for(int i=0;i<10;i++){
        if(a[i]==0)
        count++;
    }
    for(int i=0;i<10;i++){
        if(i<count)
        a[i]=0;
        else
        a[i]=1;
    }
    cout<<"aray after seggregating 0 and 1"<<endl;
    for(int i=0;i<10;i++)
    cout<<a[i]<<" ";

    return 0;
}
