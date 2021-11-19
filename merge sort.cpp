/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge sort
#include <iostream>

using namespace std;
void mergesort(int array[],int begin,int end);
void merge(int a[],int left,int mid,int right);
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
    mergesort(a,0,n-1);
    cout<<"elemnts after sorting is"<<endl;
     for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
void mergesort(int a[],int begin,int end){
    if(begin>=end)
    return;
    int mid=begin+((end-begin)/2);
    mergesort(a,begin,mid);
    mergesort(a,mid+1,end);
    merge(a,begin,mid,end);
}
void merge(int a[],int left,int mid,int right){
    int i,j;
    int sub1=mid-left+1;
    int sub2=right-mid;
    int *leftarr=new int[sub1];
    int *rightarr=new int[sub2];
    for(i=0;i<sub1;i++)
    leftarr[i]=a[left+i];
    for(i=0;i<sub2;i++)
    rightarr[i]=a[mid+1+i];
    
    int k=left;
    i=0;
    j=0;
    for(;i<sub1&&j<sub2;)
    {
        if(leftarr[i]<=rightarr[j])
        a[k++]=leftarr[i++];
        else
        a[k++]=rightarr[j++];
    }
    
    while(i<sub1){
        a[k++]=leftarr[i++];
    }
    while(j<sub2){
        a[k++]=rightarr[j++];
    }
}
