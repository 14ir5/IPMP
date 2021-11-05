/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int flag,count,j,k=0,b[8],c[8],p=0;
   int a[8]={2,3,4,5,6,4,6,5};
    
    for(int i=0;i<8;i++){
        flag=0;
       
        for(j=0;j<k;j++){
            if(a[i]==b[j])
            flag=1;
        }
        if(flag==0){
            count=1;
            b[k]=a[i];
            for(j=i+1;j<8;j++){
            if(a[j]==a[i])
            count++;
            }
           
            
            
            if(count%2!=0)
            c[p++]=b[k];
            
             k++;
        }
      
    }
      cout<<"numbers occuring odd no.of times are:"<<endl;
       for(int i=0;i<p;i++)
       cout<<c[i]<<" ";
    return 0;
}

