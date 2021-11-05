/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,a[100],flag,n,b[100],k=0,count;
   cout<<"enter no.of elements(<=100):";
   cin>>n;
   cout<<"enter elements"<<endl;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
  
   for(int i=0;i<n;i++){
        flag=0;
       
        for(j=0;j<k;j++){
            if(a[i]==b[j])
            flag=1;
        }
        if(flag==0){
            count=1;
            b[k]=a[i];
            for(j=i+1;j<n;j++){
            if(a[j]==a[i])
            count++;
            }
            if(count==1)
            cout<<a[i]<<" is a non repeating element"<<endl;
            k++;
        }
            
   }         

    return 0;
}
