/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a[100],i,j,k;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=j;k<n;k++)
            {
                if(i<j<k){
                    if(a[i]<a[j]&&a[j]<a[k])
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                }
            }
        }
    }

    return 0;
}
