//sum all n
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+printNumber(n-1);

}


int main()
{
    int n,m,sum;
    cin>>n;
    cout<<endl;
    sum=printNumber(n);
    cout<<sum;
}

//m to n sum
#include<bits/stdc++.h>

using namespace std;

int printNumber(int m,int n)
{
    if(m>n)
    {
        return 0;
    }
    return m+printNumber(m+1,n);

}


int main()
{
    int n,m,sum;
    cin>>m>>n;
    cout<<endl;
    sum=printNumber(m,n);
    cout<<sum;
}

//factorial
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*printNumber(n-1);

}


int main()
{
    int n,m,sum;
    cin>>n;
    cout<<endl;
    sum=printNumber(n);
    cout<<sum;
}

