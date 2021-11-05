/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
void bsort(int a[],int n){
    int temp,i,j;
    int flag=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
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
    
}
int main()
{
    int a[100][100],r,c,k=0,b[10000],flag,item,i,j;
    cout<<"enter no.of row in 2D array (<=100):";
    cin>>r;
    cout<<"enter no.of col in 2D array (<=100):";
    cin>>c;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            b[k++]=a[i][j];
        } 
    } 
    bsort(b,k);
    k=0;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            a[i][j]=b[k];
            k++;
        } 
    } 
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        } 
        cout<<endl;
    } 
    cout<<"enter element to search:";
    cin>>item;
    flag=0;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
           if(a[i][j]==item)
           {
               flag=1;
               cout<<"element found at row "<<i+1<<" and coloumn "<<j+1<<endl;
               
           }
           
        } 
      
   
    } 
    if(flag==0)
    cout<<"element not found";
    
    return 0;
}
