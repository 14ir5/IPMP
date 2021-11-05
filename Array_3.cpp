/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,a[100],flag,n;
   cout<<"enter no.of elements(<=100):";
   cin>>n;
   cout<<"enter elements"<<endl;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=1;i<=n;i++){
       flag=0;
       for(j=0;j<n;j++){
           if(a[j]==i)
           flag=1;
       }
       if(flag==0){
           cout<<i<<" is missing"<<endl;
       }
   }

    return 0;
}
