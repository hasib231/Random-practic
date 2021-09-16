#include<bits/stdc++.h>
#define M 1000000
using namespace std;

bool marked[M];

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2){
        if(marked[i]==false){
            for(int j=i*i;j<=n;j+=i){
                marked[j]=true;
            }
        }
    }
}
bool isPrime(int x)
{
    if(x<2)return false;
    if(x==2)return true;
    if(x%2==0)return false;
    return marked[x]==false;
}
//int main()
//{
//    int n,i;
//    cin>>n;
//    sieve(n);
//    for(i=2;i<n;i++){
//        if(marked[i]==false){
//            cout<<i<<" ";
//        }
//    }
//}

int main()
{
    int n=1000,x;
    sieve(n);
    cin>>x;
    if(isPrime(x)){
        cout<<"It is prime number"<<endl;
    }
    else{
        cout<<"Not prime"<<endl;
    }

}


