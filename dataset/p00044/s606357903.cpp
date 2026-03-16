#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;
set<int> primes={2,3,5,7,11,13,17,19,23,29,31,37,
                 41,43,47,53,59,61,67,71,73,79,
                 83,89,97,101,103,107,109,113,127,131,
                 137,139,149,151,157,163,167,173,179,181,
                 191,193,197,199,211,223,227};
bool isPrime(int n){
  for(int p:primes){
    if(p*p>n)return true;
    if(n%p==0)return false;
  }
  return true;
}
int main(){
  for(int i=229;i<50040;i+=2)
    if(isPrime(i))
      primes.insert(i);
  int n;
  while(cin>>n){
    auto r=primes.lower_bound(n);
    auto l=r;
    if(primes.count(n)==1){
      r++;l--;
    }
    else{
      l--;
    }
    cout<<(*l)<<" "<<(*r)<<endl;
  }
}