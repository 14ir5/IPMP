/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i,j,flag,pos,temp,pos2,min,diff;
    cout<<"enter no.of digits in the number:";
    cin>>n;
    cout<<"enter digits"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
        
    }
    for(i=n-1;i>=1;i--){
        if(a[i]>a[i-1]){
            flag=1;
            pos=i-1;
            break;
        }
        
    }
    if(flag==1){
    for(j=i;j<n;j++){
        if(a[j]>a[pos])
        {
           if(i==j){
                min=a[j]-a[pos];
                pos2=j;
           }
          
           else
           {
               diff=a[j]-a[pos];
               if(diff<min){
                   min=diff;
                   pos2=j;
               }
           }
            
        }
    }
    temp=a[pos];
    a[pos]=a[pos2];
    a[pos2]=temp;
    for(i=pos+1;i<n-1;i++){
        if(a[i]<a[pos2]&&a[pos2]<a[i+1]){
            temp=a[pos2];
            for(j=pos+1;j<=i;j++){
                a[j]=a[j+1];
            }
            a[i]=temp;
            
        }
    }
    }
    else
    cout<<"no higher permutation"<<endl;
    
    for(i=0;i<n;i++)
    cout<<a[i];
    return 0;
}
