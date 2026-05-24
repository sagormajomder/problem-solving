#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int length=str.size();
    for(int i=0; i<length; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y')
        {
               str.erase(i, 1);
               --i;
        }
        if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || str[i]!='y' || str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U' || str[i]!='Y')
        {
            str[i]=tolower(str[i]);
        }

    }

    for(int i=1; i<=str.size();i++)
    {
        if(str[i]!='a' || str[i]!='e' || str[i]!='i' || str[i]!='o' || str[i]!='u' || str[i]!='y' || str[i]!='A' || str[i]!='E' || str[i]!='I' || str[i]!='O' || str[i]!='U' || str[i]!='Y')
        {
            str.insert(i-1,".");
            ++i;

        }

    }

    cout<<str;
}
