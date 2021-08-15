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
