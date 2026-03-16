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
#include<cassert>
using namespace std;
int inf = 1000000000;


int main(void) {

  int n, m;
  bool f = true;
  while(cin >> n >> m){
    if( n == 0||m==0 ) break;
    if(!f ) cout << endl;
    f = false;
    vector<int> ans;
    for(int i=n; i<=m; i++){
      if( i % 400 == 0) ans.push_back(i);
      else if( i % 100 == 0 ) continue;
      else if( i % 4 == 0 ) ans.push_back(i);
    }
    if( ans.size() == 0 ) cout << "NA" << endl;
    else for(int i=0; i<ans.size(); i++) cout << ans[i] << endl;

  }


  return 0;
}


// EOF