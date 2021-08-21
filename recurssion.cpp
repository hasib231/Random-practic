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

//GCD
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n,int m)
{
    cout<<"n="<<n<<" m="<<m<<" n%m="<<n%m<<endl;
    if(n%m==0)
    {
        return m;
    }
    return printNumber(m,n%m);

}


int main()
{
    int n,m,ans;
    cin>>n>>m;
    cout<<endl;
    ans=printNumber(n,m);
    cout<<ans;
}

//find pow(n,m)
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n,int m)
{
    if(m==0)
    {
        return 1;
    }
    int result=n*printNumber(n,m-1);
    cout<<"n="<<n<<" m="<<m<<" result="<<result<<endl;
    return result;

}


int main()
{
    int n,m,ans;
    cin>>n>>m;
    cout<<endl;
    ans=printNumber(n,m);
    cout<<ans;
}

//sum of numbers
#include<bits/stdc++.h>

using namespace std;

int printNumber(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<"n="<<n<<endl;
    int rem=n%10;
    int m=printNumber(n/10);
    int result=rem+m;
    cout<<"n="<<n<<" rem="<<rem<<" result="<<result<<endl;
    return result;
    //return n%10+printNumber(n/10);

}


int main()
{
    int n,m,ans;
    cin>>n;
    cout<<endl;
    ans=printNumber(n);
    cout<<ans;
}

//sum of array element
#include<bits/stdc++.h>

using namespace std;

int printNumber(int ara[],int len)
{
    if(len<0)
    {
        return 0;
    }
    return ara[len]+printNumber(ara,len-1);
}

int main()
{
    int n,m,ans;
    int ara[]={1,3,5,7,8,9};
    n=sizeof(ara)/sizeof(ara[0]);
    ans=printNumber(ara,n-1);
    cout<<ans<<endl;

}

//reverse array
#include<bits/stdc++.h>

using namespace std;

void printNumber(int ara[],int first,int last)
{
    if(first>last)
    {
        return;
    }
    int temp=ara[first];
    ara[first]=ara[last];
    ara[last]=temp;

    printNumber(ara,first+1,last-1);
}

int main()
{
    int n,m,ans;
    int ara[]={1,3,5,7,8,9};
    n=sizeof(ara)/sizeof(ara[0]);
    printNumber(ara,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
}


