/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Company{
    int ctc;
    string name;
};
void bsort(struct Company a[],int n){
    
    int flag=0;
    struct Company temp;
    for(int i=0;i<n;i++){
        
            for(int j=0;j<n-i-1;j++){
                 if(a[j].ctc>a[j+1].ctc){
                    flag=1;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                
            }
            if(flag==0){
                    break;
                }
        
    }
    for(int i=0;i<n;i++){
        cout<<"company name:"<<a[i].name<<endl;
        
        cout<<"enter company ctc:"<<a[i].ctc<<endl;
       
    }
    
}
int main()
{
    struct Company c[100];
    int n;
    cout<<"enter the no.of companies"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter company name:";
        cin>>c[i].name;
        cout<<"enter company ctc:";
        cin>>c[i].ctc;
    }
    bsort(c,n);
    
    return 0;
}
