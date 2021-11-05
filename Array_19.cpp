/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,j,n,a[100],sum;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum=a[i];
         if(sum==0){
                j=i;
                break;
            }
        for(j=i+1;j<n;j++){
            sum=sum+a[j];
            if(sum==0){
                break;
            }
        }
        if(sum==0)
        break;
    }
    if(sum==0)
cout<<"sub array from "<<i<<" to "<<j<<endl;
return 0;
}
