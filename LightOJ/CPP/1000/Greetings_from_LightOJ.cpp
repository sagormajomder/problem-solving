#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int a,b;
        cin>>a>>b;
        (a>10 && b>10) ? cout<<"Case "<<i<<": "<<((a-10)+(b-10))<<endl: cout<<"Case "<<i<<": "<<a+b<<endl;
    }
    
}