#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5],row,col,loop=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                row=i; col=j;
            }
        }
    }

    if(row<2 )
    {
        while(row!=2)
        {
            loop++;
            ++row;
        }

    }
     if(row>2)
    {
        while(row!=2)
        {
            loop++;
            --row;
        }
    }

    if(col<2)
    {
        while(col!=2)
        {
            loop++;
            ++col;
        }

    }
    if(col>2)
    {
        while(col!=2)
        {
            loop++;
            --col;
        }

    }
    cout<<loop<<endl;

}
