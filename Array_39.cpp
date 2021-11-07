/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r,c,a[100][100],k;
    cout<<"enter no.of rows:";
    cin>>r;
    cout<<"enter no.of cols:";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++){
        k=i;
        for(int j=0;j<=i;j++){
            cout<<a[k][j]<<" ";
            k--;
        }
        cout<<endl;
    }
     for(int i=1;i<c;i++){
        k=i;
        for(int j=r-1;j>=i-1;j--){
            cout<<a[j][k]<<" ";
            k++;
        }
        cout<<endl;
    }

    return 0;
}
