#include<bits/stdc++.h>
using namespace std;

int GCD(int A,int B)
{
    cout<<"A="<<A<<" B="<<B<<endl;
    if(B==0){
        return A;
    }
    else{
        return GCD(B,A%B);
    }
}

int LCM(int a,int b)
{
    return a*b/GCD(a,b);

    //return (a/GCD(a,b))*b; //for avoid overflow
}
int main()
{
    int a,b,ans1,ans2;
    cin>>a>>b;
    ans1=GCD(a,b);
    ans2=LCM(a,b);
    //ans=__gcd(a,b); //GCD STL
    cout<<"GCD="<<ans1<<" LCM="<<ans2;
    return 0;
}


