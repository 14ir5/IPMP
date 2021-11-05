/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i,j,sum,flag=0,p,k=0,c[100];
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter sum"<<endl;
    cin>>sum;
    for(i=0;i<n;i++){
        flag=0;
        for(j=i+1;j<n;j++){
            if(a[j]+a[i]==sum)
            {
                 for(p=0;p<k;p++){
                    if(c[p]==a[i])
                    flag=1;
                }
                c[k++]=a[i];
                c[k++]=a[j];
                 if(flag!=1){
                 cout<<a[i]<<"and"<<a[j]<<endl;
                 break;}
            }
           
           
        }
    }
    

    return 0;
}
