/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum=0,a[100],n,sumg,flag=0;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    cout<<"enter sum to find:";
    cin>>sumg;
    
    
    for(int i=0;i<n;i++){
        sum=a[i];
         if(sum==sumg){
                cout<<i<<"to"<<i<<endl; 
                flag=1;
                break;
                
            }
        for(int j=i+1;j<n;j++){
            sum=sum+a[j];
            if(sum==sumg){
                cout<<i<<"to"<<j<<endl; 
                flag=1;
                break;
                
            }
        }
    }
    if(flag==0)
    cout<<"sum not found";
    return 0;
}
