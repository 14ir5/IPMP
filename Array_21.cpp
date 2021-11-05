/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i,j,suml,sumr;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sumr=0;
        suml=0;
        for(int j=i+1;j<n;j++){
            
            sumr=sumr+a[j];

         }
         for(int k=0;k<i;k++){
             suml=suml+a[k];
         }
         if(suml==sumr)
         cout<<"i="<<i<<" "<<"a[i]="<<a[i]<<endl;
    }

    return 0;
}
