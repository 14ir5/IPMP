/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,flag,max,n1,n2,diff;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    
    for(int i=0;i<n;i++){
       
         for(int j=i+1;j<n;j++){
            diff=a[j]-a[i];
            if(diff>max)
            {
                max=diff;
                n1=i;
                n2=j;
            }
        }
        
    }
    cout<<"max profit="<<max<<" buying on day "<<n1+1<<" and selling on day "<<n2+2;
    return 0;
}
