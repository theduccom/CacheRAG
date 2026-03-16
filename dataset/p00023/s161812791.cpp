#include<iostream>
#include<algorithm>
#include<functional>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<tuple>
#include<stack>
#include<queue>
#include<deque>
#include<sstream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<bitset>
#include<time.h>
#include<cstdlib>
#include<cassert>
#define ll long long
using namespace std;
                   
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout<<fixed;
#ifdef LOCAL_DEFINE
    freopen("in", "r", stdin); 
    freopen("out","w",stdout);
#endif
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    double xa,ya,ra,xb,yb,rb;
    cin>>xa>>ya>>ra>>xb>>yb>>rb;
    double d=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    if(d>ra+rb){
      cout<<0<<"\n";
    }else if(abs(ra-rb)<=d && ra+rb>=d){
      cout<<1<<"\n";
    }else{
      cout<<(ra>rb?"":"-")<<2<<"\n";
    }
  }
#ifdef LOCAL_DEFINE
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
  return 0;
}