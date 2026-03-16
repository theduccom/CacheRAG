#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n) 

const static int dx[13] = {0,1,0,-1,0,1,-1,-1,1,2,0,-2,0};
const static int dy[13] = {0,0,1,0,-1,1,1,-1,-1,0,2,0,-2};
int main(void){  
  int date[14][14]={0};
  int x,y,s,c=0,m=0;
  
  while(scanf("%d,%d,%d",&x,&y,&s) != EOF)
    REP(i,4*s+1) date[x+2+dx[i]][y+2+dy[i]] += 1;

  FOR(i,2,12)
    FOR(j,2,12){
      if(date[i][j]==0) c++;
      m = max(date[i][j], m);
    }
  cout << c << endl;
  cout << m << endl;
}