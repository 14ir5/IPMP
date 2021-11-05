/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void show(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
int main()
{
    int i,a[100],n,flag=1,allnine;
    cout<<"enter no.of digits in array"<<endl;
    cin>>n;
    cout<<"enter numbers in an array to find next highest palindrome"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    //check whether number is palindrome or not;
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i])
        flag=0;
    }
    if(flag==1){
        for(i=0;i<n;i++){
            if(a[i]!=9)
            allnine=0;
        }
        if(allnine==0){
            if(n%2==0){
                a[n/2]++;
                a[n/2-1]++;
            }
            else
            a[n/2]++;
            show(a,n);
        }
        else{
            a[0]=1;
            a[n]=1;
            for(i=1;i<n;i++)
            a[i]=0;
            show(a,n+1);
        }
        
    }
    else{
        if(n%2==0){
            if(a[n/2]>a[(n/2)-1])
            {
                a[n/2-1]=a[n/2];
                for(i=0;i<(n/2-1);i++)
                a[n-1-i]=a[i];
            }
            else{
                a[n/2]=a[n/2-1];
                for(i=0;i<(n/2-1);i++)
                a[n-1-i]=a[i];
                }   
        }
        
        else{
            a[n/2]++;
            for(i=0;i<(n/2);i++)
                a[n-1-i]=a[i];
             }
             show(a,n);
    }
        
    

    return 0;
}
