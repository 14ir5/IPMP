/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void ssort(int b[],int no){
    int pos,temp;
    for(int i=0;i<no;i++){
        pos=i;
        temp=b[i];
        for(int j=i+1;j<no;j++){
            if(b[j]<temp)
            {
                temp=b[j];
                pos=j;
                
            }
            
        }
        b[pos]=b[i];
        b[i]=temp;
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
    ssort(a,n);
    cout<<"the array after sorting"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    
}