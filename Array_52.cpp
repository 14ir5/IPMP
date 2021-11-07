/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,flag;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    cout<<"leader elements are:"<<endl;
    for(int i=0;i<n;i++){
        flag=0;
         for(int j=i+1;j<n;j++){
             
             if(a[j]>=a[i])
             {
                 flag=1;
                 break;
             }
       
         }
         if(flag==0)
         cout<<a[i]<<" ";
    }
    return 0;
}
