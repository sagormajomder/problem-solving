#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,t=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
                sum++;
        }
        if(sum >=2)
            t++;
        sum=0;
    }
    cout<<t;
 
}