/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge sort
#include <iostream>
#include <climits>
using namespace std;

void countsort(int a[],int n);
int findmax(int a[],int n);
int main()
{
    int n;
    cout<<"enter the no.of elements in array to be sort:";
    cin>>n;
    int *a=new int[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
     for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
   
    countsort(a,n);
    
    return 0;
}
void countsort(int a[],int n){
    int count;
    int max=findmax(a,n);
    int b[n];
    int *c=new int[max+1]; //(0-max elements-to find frequency and cum frq of elements 0-max)
    for(int i=0;i<=max;i++){
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==i)
            count++;
        }
        c[i]=count;
    }
    int sum=0;
    for(int i=0;i<=max;i++){
        sum+=c[i];
        c[i]=sum;
    }
    for(int i=n-1;i>=0;i--){
        b[c[a[i]]-1]=a[i];
        c[a[i]]-=1;
    }
    cout<<"elemnts after sorting is"<<endl;
     for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
}
int findmax(int a[],int n){
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    return max;
}
