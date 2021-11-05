/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[100],b[100],prod=1;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        prod=1;
        for(j=0;j<n;j++){
            if(i!=j)
            prod=prod*a[j];
        }
        b[i]=prod;
    }
    for(i=0;i<n;i++){
        
        cout<<b[i]<<" ";
    }
    

    return 0;
}
