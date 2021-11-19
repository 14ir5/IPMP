/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void isort(int b[],int no){
    
    int key,j;
    
    for(int i=1;i<no;i++){
        key=b[i];j=i-1;
        
        while(key<b[j]&&j>=0){
            b[j+1]=b[j];j--;
            
        }
            
            b[j+1]=key;
        
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
    isort(a,n);
    cout<<"the array after sorting"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}