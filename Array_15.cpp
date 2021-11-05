/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[100][100],r,c,i,j,count=0,max=0,index;
    cout<<"enter the no.of rows:";
    cin>>r;
    cout<<"enter no.of columns:";
    cin>>c;
    cout<<"enetr elements in row wise order"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++)
        cin>>a[i][j];
    }
    for(i=0;i<r;i++){
        count=0;
        
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            count++;
        }
        if(count>max){
          max=count;
          index=i;
        }
    }
    cout<<"row with max no.of 1s is:"<<index+1<<" with no.of 1s="<<max<<endl;

    return 0;
}
