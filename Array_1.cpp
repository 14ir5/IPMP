/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void bsort(int a[],int n);
void un(int a[],int b[],int n1,int n2);
void intersec(int a[],int b[],int n1,int n2);
int i,j,flag;
int main()
{
    int a[100],b[100],n1,n2;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n1;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n1;i++){
        
        cin>>a[i];
    }
    cout<<"enter no.of elements in array 2(<=100):";
    cin>>n2;
    cout<<"Enter array2 elements"<<endl;
    for(int i=0;i<n2;i++){
        
        cin>>b[i];
    }
    bsort(a,n1);
    bsort(b,n2);
    cout<<"sorted arrays are:"<<endl;
    for(i=0;i<n1;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<n2;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    un(a,b,n1,n2);
    intersec(a,b,n1,n2);
    
    
    return 0;
}
void un(int a[],int b[],int n1,int n2){
    
    for(i=0;i<n2;i++){
        flag=0;
        for(j=0;j<n1;j++){
            if(a[j]==b[i])
            flag=1;
        }
        if(flag==0)
        a[n1++]=b[i];
    }
    cout<<"union of entered arrays is :"<<endl;
    for(i=0;i<n1;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
void intersec(int a[],int b[],int n1,int n2){
    int k=0,c[100];
    for(i=0;i<n2;i++){
        flag=0;
        for(j=0;j<n1;j++){
            if(a[j]==b[i])
            flag=1;
        }
        if(flag==1)
        c[k++]=b[i];
    }
    cout<<"union of entered arrays is :"<<endl;
    for(i=0;i<k;i++)
    cout<<c[i]<<" ";
}
void bsort(int a[],int n){
    int temp;
    flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
           
        }
         if(flag==0)
            break;
    }
    
}