#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
#include<list>
using namespace std;
int inf = 1000000000;

int main(void) {

  int n;
  while(cin >> n){
    if( n == 0 ) break;
    vector<long long int> ans;
    vector<long long int> u(4001, 0);
    vector<bool> b(4001, false);
    vector<long long int> e(n);
    vector<long long int> p(n);
    vector<long long int> q(n);
    for(int i=0; i<n; i++){
      cin >> e[i] >> p[i] >> q[i];
      u[ e[i] ] += p[i]*q[i];
    }
    for(int i=0; i<n; i++){
      if( b[e[i]] ) continue;
      if( u[ e[i] ] >= 1000000 ){
        ans.push_back(e[i]);
        b[ e[i] ] = true;
      }
    }
    if( ans.size() == 0 ) cout << "NA" << endl;
    else for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;
  }

  return 0;
}

// EOF