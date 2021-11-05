/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],n,i,j,sum,flag=0,p,k=0,c[100],m=0,flag1=0,flag2=0;
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
        flag1=0;
        for(j=i+1;j<n;j++){
            flag2=0;
            for(k=j+1;k<n;k++){
                if(a[j]+a[i]+a[k]==sum)
                {
                    for(p=0;p<m;p++){
                    if(c[p]==a[i])
                    flag1=1;
                    if(c[p]==a[j])
                    flag2=1;
                    }
                    
                
                flag=flag1*flag2;
                c[m++]=a[i];
                 c[m++]=a[j];
                 c[m++]=a[k];
                 if(flag!=1){
                      cout<<a[i]<<","<<a[j]<<","<<a[k]<<endl;
                     break;}
                }   
                
            }
            
    
        }    
    }
    return 0;
}
