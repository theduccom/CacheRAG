#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <list>
#include <numeric>
#include <utility>
#include <ctime>
#define INF 100000000
#define LINF 9000000000000000000
#define mod 1000000007
 
#define rep(i,n) for(int i=0;i<int(n);i++)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define mp make_pair
#define MOD(x) (x%(mod))
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool debug=false;

/*---------------------------------------------------*/

int prime[100005];
bool is_prime[10000005];

void sieve(){
  int p=0;
  for(int i=0;i<10000000;i++)is_prime[i]=true;
  is_prime[0]=is_prime[1]=false;
  for(int i=2;i<10000000;i++){
    if(is_prime[i]){
      prime[p++]=i;
      for(int j=2*i;j<=10000000;j+=i)is_prime[j]=false;
    }
    if(p==100000)return;
  }
  //cout<<prime[10000-1]<<endl;
}
  
ll prime_sum(int n){
  ll sum=0;
  for(int i=0;i<n;i++){
    //cout<<prime[i]<<" ";
    sum+=prime[i];
  }
  //cout<<endl;
  return sum;
}

int main(){
  int n;
  sieve();
  while(cin>>n){
    if(n==0)break;
    cout<<prime_sum(n)<<endl;
  }
}