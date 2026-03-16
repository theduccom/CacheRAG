#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0;i < (n);i++)
#define P pair<int,int>
#define pb push_back
#define mk make_pair
using namespace std;
const int INF = 1 << 20;

typedef long long ll;

bool Sosuu(int r){
  for(int i = 2;i <= sqrt(r);i++){
    if(r%i == 0)
      return false;
  }
  return true;
}


int main(){
  int n,m;

  while(cin >> n){
    int a = n-1;
    while(1){
      bool f = Sosuu(a);
      if(f)
	break;
      a--;
      
    }
    int b = n+1;
    while(1){
      bool f = Sosuu(b);
      if(f)
	break;
      b++;
    }
    cout << a << " " << b << endl;
  }
  return 0;
}

