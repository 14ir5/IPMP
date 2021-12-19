/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100][100],r,c,k=0,n,b[100][100];
    cout<<"enetr no.of rows:";
    cin>>r;
    cout<<"enter no.of columns:";
    cin>>c;
    for(int i=0;i<r;i++){
        cout<<"Enter row "<<i+1<<" elements seperated by a space"<<endl;
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]==1){
                b[k][0]=i;
                b[k][1]=j;
                k++;
            }
        }
    }
    
        for(int p=0;p<k;p++){
            
            for(int j=0;j<c;j++){
                a[b[p][0]][j]=1;
            
            }
            
        }
         for(int p=0;p<k;p++){
            
            for(int i=0;i<r;i++){
                a[i][b[p][1]]=1;
            
            }
            
        }
       
    
    
   
    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}
