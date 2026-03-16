#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdexcept>
#include<cmath>
#include<memory>
#include<algorithm>
#include<cstring>
#include<ctime>
#include<deque>
#include<sstream>
#include<iomanip>
#include<sstream>
#include<vector>
#include<queue>
#include<stack>
#include<string>
#include<climits>
#include<map>
#include<set>
#include<list>
#include<cassert>
#include<deque>
#define REP(i,s,n) for(int i=s;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define INF 1<<27
#define all(n) n.begin(),n.end()
#define insert(a,b,c,d) PP(P(a,b),P(c,d))
#define F first
#define S second
#define pb push_back
#define pf push_front
#define LIM 510000
#define MAX 510000
using namespace std;
typedef pair<int,int> P;
typedef pair<P,P> PP;
typedef long long ll;
typedef unsigned long long ull;
bool prime[LIM];

void eratos(){
  rep(i,LIM)prime[i] = false;
  for(int i=3;i<LIM;i+=2)prime[i] = true;
  prime[2] = true;

  for(int i=3;i<=sqrt(LIM);i+=2){
    if(!prime[i])continue;
    for(int j=i+i;j<=sqrt(LIM);j+=i)
      prime[j] = false;
  }
}

void create(){
   for(int i=0;i<=MAX;i++)prime[i]=false;
   for(int i=3;i<=MAX;i+= 2)prime[i] = true;
   prime[2] = true;
   int limit = (int)sqrt(MAX)+1; 
     for(int i=3;i<=limit;i+=2){
    if(!prime[i])continue;
      for(int j=i+i;j<=MAX;j+=i){
        prime[j]=false;
      }
       
   }
 
}
 
bool isPrime(int n){
  for(int i=2;i<=sqrt((double)n);i++){
    if(n%i == 0)return false;
  }
  return true;
}

int main(){

  create();
  int n;
  while(true){
    cin >> n;
    if(n == 0)break;
 
    int cnt = 0;
    for(int i=2;i <= n/2;i++){
      
      if(prime[n-i] && prime[i] ){
	//	cout << i << "-th,"<< i << " " << n-i  << endl;
	
	cnt++;
      }
    }
    cout << cnt << endl;
  }


return 0;
}