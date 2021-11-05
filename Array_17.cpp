/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#define INT_MAX 2147483647;
int main()
{
    int a[100],n,diff=0,n1,n2,min;
    min=INT_MAX;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
     for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             
             if(a[j]>=a[i]){
                 diff=a[j]-a[i];
             }
             else if(a[j]<a[i]){
                 diff=a[i]-a[j];
             }
             if(diff<min){
                 
                min=diff;
                n1=a[i];
                n2=a[j];
             }
             
        
        
         }
    }
    cout<<"numbers with min difference are "<<n1<<"and"<<n2<<" with minimum="<<min;
    

    return 0;
}
