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

//fibonacci
#include<bits/stdc++.h>

using namespace std;

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);

}


int main()
{
    int n,ans;
    cin>>n;
    cout<<endl;
    ans=fib(n);
    cout<<ans;
}

//palindrome
#include<bits/stdc++.h>

using namespace std;

bool palindrome(string str,int first,int last)
{
    if(first>=last)
    {
        return true;
    }
    if(str[first]!=str[last])
    {
        return false;
    }

    return palindrome(str,first+1,last-1);
}

int main()
{
    string str;
    int first,last;
    bool b;
    cin>>str;
    first=0;
    last=str.size()-1;
    b=palindrome(str,first,last);
    if(b)
    {
        cout<<"This string is palindrome"<<endl;
    }
    else{
        cout<<"This string is not palindrome"<<endl;
    }

}

//permutation of string
#include<bits/stdc++.h>
#define swapp(a,b) {char t=a;a=b;b=t;}
using namespace std;

char str[100];
void permutation(int k)
{
    if(str[k]){
        for(int i=k;str[i];i++){
            cout<<"i="<<i<<" k="<<k<<" str[i]="<<str[i]<<" str[k]="<<str[k]<<endl;
            swapp(str[i],str[k]);
            permutation(k+1);
            swapp(str[i],str[k]);
        }
    }
    else
        printf("%s\n",str);

}


int main()
{
    scanf("%s",str);
    permutation(0);
}



