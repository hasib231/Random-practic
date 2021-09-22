#include<bits/stdc++.h>

using namespace std;

int List[1000000];
int lsize;

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



void primeFactorize(int n)
{
    lsize=0;
    vector<int> prime;
    prime=getPrimes(sqrt(n)+1);
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n=n/prime[i];
                List[lsize]=prime[i];
                lsize++;
            }
        }
    }
    if(n>1){
        List[lsize]=n;
        lsize++;
    }

}

int main()
{
    int x;
    cout<<"Enter a value: "<<endl;
    cin>>x;
    primeFactorize(x);
    for(int i=0;i<lsize;i++){
        cout<<List[i]<<" ";
    }
}
