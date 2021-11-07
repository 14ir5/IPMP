/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int sum=0,a[100],n,cl,cr,len,max=0,index,left;
    cout<<"enter no.of elements in array 1(<=100):";
    cin>>n;
    cout<<"Enter array1 elements"<<endl;
    for(int i=0;i<n;i++){
        
        cin>>a[i];
    }
    
    
    
    for(int i=0;i<n;i++){
        cl=0;
        cr=0;
        for(int j=i-1;j>=0;j--){
            if(a[j]<a[i])
            cl++;
            else
            break;
            
        }
         for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
            cr++;
            else
            break;
            
        }
        len=1+cl+cr;
        if(len>max && cr>0 && cl>0){
          max=len;
          index=i;
          left=cl;
        }
    }
    cout<<"max length="<<max<<endl;
    cout<<"k="<<a[index]<<endl;
    cout<<"bitonic subarray is:"<<endl;
   for(int i=index-left;i<len;i++)
   cout<<a[i]<<" ";
    return 0;
}
