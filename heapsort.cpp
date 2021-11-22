/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>

using namespace std;
void buildheap(int a[],int h[],int n);
void dltsort(int h[],int n);

int main()
{
    int n;
    cout<<"enter the no.of elemts in the array to get sorted"<<endl;
    cin>>n;
    int* a=new int[n+1];
    int* h=new int[n+1];
    a[0]=0;
    h[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    //steps
    buildheap(a,h,n);
    dltsort(h,n);
    for(int i=1;i<=n;i++)
    cout<<h[i]<<" ";
    return 0;
}
void buildheap(int a[],int h[],int n){
    int temp;
    h[1]=a[1];
    for(int i=2;i<=n;i++){
        h[i]=a[i];
        int k=i;
        for(int j=i/2;j>=1;j=j/2){
            if(h[j]<h[k]){
                temp=h[j];
                h[j]=h[k];
                h[k]=temp;
                k=j;
            }
         
        }
    }
}
void dltsort(int h[],int n){
    int temp;
    for(int i=1;i<=n-1;i++){
        
        temp=h[1];
        h[1]=h[n-i+1];
        h[n-i+1]=temp;
        
        if(h[2]>h[1]&&n-i>=2){
            temp=h[1];
            h[1]=h[2];
            h[2]=temp;
        }
        if(h[3]>h[1]&&n-i>=3){
            temp=h[1];
            h[1]=h[2];
            h[2]=temp;
        }
    }
}
