/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int a[100],n1,flag,count,j,k=0,b[100],c[100],p=0;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n1;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n1;i++){
        
        cin>>a[i];
    }
    
    for(int i=0;i<n1;i++){
        flag=0;
       
        for(j=0;j<k;j++){
            if(a[i]==b[j])
            flag=1;
        }
        if(flag==0){
            count=1;
            b[k]=a[i];
            for(j=i+1;j<n1;j++){
            if(a[j]==a[i])
            count++;
            }
           
            cout<<b[k]<<" occurs "<<count<<" times "<<endl;
            
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
