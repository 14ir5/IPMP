/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//merge sort
#include <iostream>
#include <climits>
using namespace std;
void quicksort(int a[],int l,int h);
int partition(int a[],int l,int h);
void swap(int a[],int *x,int *y);

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
    a[n]=INT_MAX;    //to avoid using length of the array
    quicksort(a,0,n);
    cout<<"elemnts after sorting is"<<endl;
     for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}
void quicksort(int a[],int l,int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        quicksort(a,l,j);
        quicksort(a,j+1,h);
    }
}
int partition(int a[],int l,int h){
    int pivot=a[l];
    
    int i=l,j=h;
    while(i<j){
        do{
            i++;
        }while(a[i]<=pivot);
        do{
            j--;
        }while(a[j]>pivot);
        if(i<j)
        swap(a[i],a[j]);
    }
   swap(a[l],a[j]);
        return j;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}