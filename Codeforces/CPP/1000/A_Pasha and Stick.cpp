#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum,n,last,i=1,result=0;
    cin>>n;
    while(sum<=last)
    {
        sum=2*i;
        last=n-sum;
        if(last%2==0 && last!=0 && sum<last)
        {
            ++result;
        }
        ++i;
    }
    cout<<result<<endl;
}
