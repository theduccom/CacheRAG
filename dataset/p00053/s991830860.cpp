#include<iostream>
#include<cmath>
#include<vector>
#define MAX 104800
#define REP(i,s,n) for(int i=s;i<=n;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
bool prime[MAX];
vector<int> p;
int mMAX = MAX-10;

void eratos(){
  rep(i,mMAX)prime[i] = false;
  for(int i=3;i<=mMAX;i+=2)prime[i] = true;
  prime[2] = true;
  int lim = sqrt((double)mMAX)+1;
  for(int i=3;i<=lim;i+=2){
    if(!prime[i])continue;
    for(int j=i+i;j<=mMAX;j+=i)prime[j] = false;
  }
  p.push_back(2);
  for(int i=3;i<=mMAX;i+=2){
    if(prime[i])p.push_back(i);
  }
}


int main(){
  int n;
  eratos();

  while(cin >> n && n){
    long long sam=0;
    rep(i,n-1){
      sam+=p[i];
    }
    cout << sam << endl;
  }
  return 0;
}