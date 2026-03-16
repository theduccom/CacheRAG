#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<random>
using namespace std;

int main(){

  int s3x[12] = {0, 1, 0, -1, 1, 1, -1, -1, 0, 2, 0, -2};
  int s3y[12] = {1, 0, -1, 0, 1, -1, 1, -1, 2, 0, -2, 0};

  vector< vector<int> > p( 10, vector<int> (10, 0) );
  int x, y, s;
  int cnt = 0;
  int mx = 0;

  while( scanf("%d,%d,%d", &x, &y, &s) != EOF ){
    p[ x ][ y ]++;
    mx = max(mx, p[x][y]);
    cnt++;
    for(int i=0; i<s*4; i++){
      int tx = x + s3x[i];
      int ty = y + s3y[i];
      if( tx < 0 || ty < 0 || tx >= 10 || ty >= 10 ) continue;
      p[tx][ty]++;
      cnt++;
      mx = max(mx, p[tx][ty]);
    }
    // cerr << cnt << endl;
  }
  int ans = 0;
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      if( p[i][j] == 0 ) ans++;
    }
  }
  cout << ans << endl;
  cout << mx << endl;
  return 0;
}




// EOF