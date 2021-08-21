#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j=0,ct=0,stop=0,test=1;
    cin>>n>>x;
    int ara[n];

    for(i=0;i<n;i++)
    {
        ara[i]=i+1;
    }
    while(1)
    {
        if(stop==n)
        {
            break;
        }
        if(ara[j]!=0)
        {
            ct++;
        }
        if(ct==x)
        {
            ct=0;
            ara[j]=0;
            for(i=0;i<n;i++)
            {
            cout<<ara[i]<<" ";
            }
            cout<<"test="<<test;
            cout<<endl;
            stop++;
        }

        j++;
        j=j%n;

        test++;
    }
}

