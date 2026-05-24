#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {

        int n;
        cin>>n;
        for(int i=1; i<=n; ++i)
        {
            if(i==n)
            {
                int j=(n*2);
                while(j>0)
                {
                    cout<<"*";
                    --j;
                }
            }
            else
            {
                for(int sline=1; sline<=i; ++sline)
                {
                    cout<<"*";
                }
                for(int another1=1; another1<=(n-i); ++another1)
                {
                    cout<<"##";
                }

                for(int sline=1; sline<=i; ++sline)
                {
                    cout<<"*";
                }
                cout<<endl;

            }

        }
        cout<<endl;

        --t;
    }

}
