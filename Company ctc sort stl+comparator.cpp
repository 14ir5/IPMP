/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Company{
    int ctc;
    string name;
};
int compare(const Company &a, const Company &b)
{
    return a.ctc < b.ctc;
}
int main()
{
    vector<Company>v;
   //  v.push_back(Company());

    int n;
    string a;
    int b;
    cout<<"enter the no.of companies"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        //v[i].push_back(Company());
        cout<<"enter company name:";
        cin>>a;
        cout<<"enter company ctc:";
        cin>>b;
       // Company x={b,a};
      // v[i].name=a;
      // v[i].ctc=b;
        v.push_back({b,a});
    }
    sort(v.begin(),v.end(), compare);
    cout<<endl;
    cout<<"sorted vector is"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Company name:"<<v[i].name<<endl;;
        cout<<"Company ctc:"<<v[i].ctc<<endl;
        cout<<endl;
    }
   
    return 0;
}
