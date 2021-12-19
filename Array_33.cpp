/******************************************************************************

                              Online C++ Compiler.
               Ceode, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char a[8]={'a','1','b','2','c','3','d','4'};
    int k=0,temp;
    for(int i=0;i<8;i++){
        if(isalpha(a[i])){
            temp=a[i];
            a[i]=a[k];
            a[k]=temp;
            k++;
        }
    }
    int flag=0;
    for(int i=0;i<4;i++){
        for(int j=4;j<7-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
           
        }
         if(flag==0)
            break;
    }
    for(int i=0;i<8;i++)
    cout<<a[i]<<" ";
   

    return 0;
}
