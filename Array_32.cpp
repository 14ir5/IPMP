/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,temp,i,j;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    j=n-1;
    i=0;
        while(j>i){
            while(a[i]>0){
                 i++;
            }
            while(a[j]<0){
                 j--;
            }
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    
        
     for(i=0;a[i]>=0;i++);
     for(j=1;(j<i)&&a[j]>0;j=j+2){
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             i++;
     }
   
    for(int i=0;i<n;i++){
        
        cout<<a[i]<<" ";
        
    }
    

    return 0;
}
