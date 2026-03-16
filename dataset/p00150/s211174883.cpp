#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_N = 10010;
vector<int> prime;
bool isPrime[MAX_N];
int T[MAX_N];

int make() {
  fill(isPrime,isPrime+MAX_N,true);
  isPrime[0] = isPrime[1] = false;
  for(int i = 0; i < MAX_N; ++i) {
    if(!isPrime[i]) continue;
    prime.push_back(i);
    for(int j = i*2; j < MAX_N; j += i) isPrime[j] = false;
  }

  fill(T,T+MAX_N,-1);
  for(int i = 1; i < prime.size(); ++i) {
    if(prime[i]-prime[i-1] == 2)
      T[prime[i]] = i;
  }
  for(int i = 0, j = -1; i < MAX_N; ++i) {
    if(T[i] != -1) j = T[i];
    else T[i] = j;
  }
}

int main() {
  make();
  int n;
  while(cin >> n && n)
    cout << prime[T[n]-1] << " " << prime[T[n]] << endl;
  return 0;
}