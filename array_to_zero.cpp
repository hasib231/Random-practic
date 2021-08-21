#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j=0,ct=0;
    cin>>n>>x;
    int ara[n];

    for(i=0;i<n;i++)
    {
        ara[i]=i+1;
    }

    while(ara[j]!=0)
    {
        if(ct==n)
        {
            break;
        }
        ara[j]=0;
        for(i=0;i<n;i++)
        {
        cout<<ara[i]<<" ";
        }
        cout<<endl;
        ct++;

        j=j+x;
        if(j>n-1)
        {
            j=0;
            while(ara[j]==0)
            {
                j++;
                if(ara[j]!=0)
                    break;
            }
        }
    }


}
