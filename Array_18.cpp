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
    int a[100],n,diff=0,n1,n2,min,sum;
    min=INT_MAX;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
     for(int i=0;i<n-1;i++){
         sum=0;
         for(int j=i+1;j<n;j++){
               sum=0;
               sum=a[j]+a[i];
               if(sum<0)
               sum=(-1)*sum;
                if(sum<min){
                min =sum;
                
                 n1=i;
                 n2=j;
             }
             
            
            
         }
    }
    cout<<"first 2 elements with min sum in an array";
   cout<<n1<<" "<<n2<<endl;
   
    return 0;
}
