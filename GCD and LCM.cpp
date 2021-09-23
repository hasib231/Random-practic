//GCD
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
int main()
{
    int a,b,ans;
    cin>>a>>b;
    ans=GCD(a,b);
    //ans=__gcd(a,b); //GCD STL
    cout<<ans;
    return 0;
}


