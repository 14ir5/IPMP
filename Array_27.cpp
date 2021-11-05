/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100],count=0 ,j=0,k=0,n,b[100],c[100][2],flag=0;
    cout<<"enter no.of elements in array (<=100):";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
   
    for(int i=0;i<n;i++){
        count=1;
        flag=0;
        for(j=0;j<k;j++){
            if(a[i]==c[j][0])
            {
                flag=1;
            }
        }    
            if(flag==0){
                for(j=i+1;j<n;j++){
                    if(a[j]==a[i])
                    count++;
                }
               c[k][0]=a[i];
               c[k][1]=count;
               k++;
               
            }
       
    }
      int temp;
    flag=0;
    for(int i=0;i<k;i++){
        for(j=0;j<k-i-1;j++){
            if(c[j][1]>c[j+1][1]){
                temp=c[j][0];
                c[j][0]=c[j+1][0];
                c[j+1][0]=temp;
                 temp=c[j][1];
                c[j][1]=c[j+1][1];
                c[j+1][1]=temp;
                flag=1;
            }
           
        }
         if(flag==0)
            break;
    }
    for(int i=0;i<k;i++){
        for(j=0;j<c[i][1];j++){
            cout<<c[i][0]<<" ";
        }
    }

    return 0;
}
