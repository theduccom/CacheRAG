#include<vector>
#include<iostream>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
#define ALL(C)     (C).begin(),(C).end()

const int N = 1000001;
const int M = 30;

bool table[M][N];
bool isprime[N];

void generate(){
  for(int i=0;i<N;i+=2)isprime[i]=false;
  for(int i=1;i<N;i+=2)isprime[i]=true;
  isprime[2]=true;
  for(int i=3;i*i <= N ;i+=2){
    if (isprime[i]){
      for(int j=2*i;j<N;j+=i)isprime[j]=false;
    }
  }
}

void solve(int n,int lim,vector<int> & price){
  rep(i,n)rep(j,lim+1)table[i][j]=false;
  
  for(int i=0;i<lim+1;i+=price[0]){
    table[0][i]=true;
  }

  REP(i,1,price.size()){
    rep(j,lim+1){
      table[i][j]=table[i-1][j];
      if (j-price[i] < 0)continue;
      //if (j-price[i] == 0)table[i][j]=true;
      table[i][j]|=(table[i][j-price[i]]|table[i-1][j-price[i]]);
    }
  }

  for(int i=lim;i>0;i--){
    if (isprime[i] && table[n-1][i]){
      cout << i << endl;
      return;
    }
  }
  cout << "NA" << endl;
}


main(){
  int n;
  int lim;
  generate();
  while(cin>>n>>lim && n){
    vector<int> a;
    int tmp;
    rep(i,n){
      cin>>tmp;
      a.push_back(tmp);
    }
    solve(n,lim,a);
  }
  return false;
}