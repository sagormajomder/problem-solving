#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char c[n][100],ch[100];
 
    for(i=0; i<n; i++)
    {
         cin>>c[i];
        int l=strlen(c[i]);
 
        if(l>10)
        {
                    ch[0]=c[i][0];
                    ch[l-1]=c[i][l-1];
                    cout << ch[0] <<l-2 << ch[l-1] <<endl;
        }
        else
            cout<< c[i] << endl;
 
    }
 
}