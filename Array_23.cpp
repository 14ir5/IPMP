/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int r,c,a[100][100],i,j,k,m;
    cout<<"enter no.of row in 2D array (<=100):";
    cin>>r;
    cout<<"enter no.of col in 2D array (<=100):";
    cin>>c;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<r;i++){
        
        for(j=0;j<c;j++){
            cin>>a[i][j];
           
        } 
    } 
    int rows=r;
    int cols=c;
    k=0;
    m=0;
    while(k<r&&m<c){
        for(i=m;i<c;i++)
        cout<<a[k][i]<<" ";
        k++;
        for(i=k;i<r;i++)
        cout<<a[i][c-1]<<" ";
        c--;
     
        if (k < r) {
            for (i = c-1; i >= m; --i) {
                cout << a[r - 1][i] << " ";
            }
            r--;
        }
         if (m < c) {
            for (i = r-1; i>=k; --i) {
                cout << a[i][m] << " ";
            }
            m++;
        }
    }
    
    return 0;
}
