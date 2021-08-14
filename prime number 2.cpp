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
