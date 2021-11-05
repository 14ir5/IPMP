/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[100],i,j,flag;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(i=1;;i++){
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==i)
            flag=1;
            
        }
        if(flag==0){
            cout<<i<<" is the first positive integer missing in the array"<<endl;
            break;
        }
    }

    return 0;
}
