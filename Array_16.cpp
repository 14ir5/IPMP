/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,diff=0,max=0;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             
             if(a[j]>a[i]){
                 diff=a[j]-a[i];
             }
             if(diff>max)
             max=diff;
        
        
         }
    }
    cout<<"max diff="<<max;
    

    return 0;
}
