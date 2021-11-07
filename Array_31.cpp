/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int count=0,a[100],n;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        
        if(a[i]!=0)
        a[count++]=a[i];
    }  
        while(count<n)
        {
            a[count++]=0;
        }
        
    
    for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
    }
    

    return 0;
}
