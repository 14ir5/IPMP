/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void bsort(int a[],int n){
    int temp;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
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
int main()
{
    int a[100],n;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    bsort(a,n);
    cout<<"the array after sorting"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}