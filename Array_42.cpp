/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum=0,a[100],n,n1,n2,prod,max=0;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    
    
    
    for(int i=0;i<n;i++){
        prod=1;
        
         for(int j=i;j<n;j++){
            prod=prod*a[j];
            if(prod>max){
            max=prod;
            n1=i;
            n2=j;}
        }
       
        
    }
    cout<<"product max="<<max<<endl;
   for(int i=n1;i<=n2;i++)
   cout<<a[i]<<" ";
    return 0;
}
