#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
      int n;
      cin>>n;
      (n<=10) ? cout<<n << " " <<0<<endl : cout<< 10 <<" "<<n-10<<endl;
   }
   return 0;
}

