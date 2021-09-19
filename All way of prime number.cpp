#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
    bool x;
    int n;
    while(cin>>n){
    x=isPrime(n);
    if(x)
    {
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is not prime number"<<endl;
    }
    }
}


//2nd
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main()
{
    bool x;
    int n;
    while(cin>>n){
    x=isPrime(n);
    if(x)
    {
        cout<<n<<" is prime number"<<endl;
    }
    else{
        cout<<n<<" is not prime number"<<endl;
    }
    }
}


//3rd
//Get all prime number until n
//O(n(sqrt(n)))


#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

vector<int> getPrimes(int n) {
  vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }
  return primes;
}

int main()
{
    vector<int> pr;
    vector<int>::iterator it;
    int n;
    while(cin>>n){
    //cin>>n;
    pr=getPrimes(n);

    for(it=pr.begin(); it!=pr.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    }
}


//4th
//sieve
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


//5th
//segmented sieve
#include<bits/stdc++.h>

using namespace std;

using ll=long long;
#define MAX 32000
vector<int> primes;

void sieve()
{
    bool isPrime[MAX];
    for(int i=0;i<MAX;++i) isPrime[i]=true;
    for(int i=3;i*i<=MAX;i+=2){
        if(isPrime[i]){
            for(int j=i*i;j<=MAX;j+=i){
                isPrime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<MAX;i+=2){
        if(isPrime[i]) primes.push_back(i);
    }
    //for(int i=0;i<10;++i) cout<<primes[i]<<endl;
}

void segSieve(ll l,ll r)
{
    bool isPrime[r-l+1];
    for(int i=0;i<r-l+1;++i) isPrime[i]=true;
    if(l==1) isPrime[0]=false;
    for(int i=0;primes[i]*primes[i]<=r;++i){
        int currenrPrime=primes[i];
        ll base=(l/currenrPrime)*currenrPrime;
        if(base<l) base+=currenrPrime;
        for(ll j=base;j<=r;j+=currenrPrime){
            isPrime[j-l]=false;
        }
        if(base==currenrPrime) isPrime[base-l]=true;
    }
    for(int i=0;i<r-l+1;++i){
        if(isPrime[i]) cout<<(i+l)<<endl;
    }
}
int main()
{
    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        segSieve(l,r);
        cout<<endl;
    }
}
