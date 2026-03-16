#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<complex>
#include<map>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;
typedef complex<double> P;

int b[20][20] = {{0}};
int &pos(int y, int x){
  return b[y+5][x+5];
}

int main(){
  string str;
  while(cin>>str){
    int i = 0;
    do{
      REP(j,8)
	pos(i,j) = str[j] - '0';
    }while(++i<8 && cin>>str);

    char ans;
    REP(y,8) REP(x,8){
      if(pos(y,x) == 1){
	if(pos(y+3,x) == 1)
	  ans = 'B';
	else if(pos(y,x+3) == 1)
	  ans = 'C';
	else if(pos(y+2,x-1) == 1)
	  ans = 'D';
	else if(pos(y+1,x+2) == 1)
	  ans = 'E';
	else if(pos(y+2,x+1) == 1)
	  ans = 'F';
	else if(pos(y,x+1) == 1 && pos(y+1,x-1) == 1)
	  ans = 'G';
	else
	  ans = 'A';
	goto end;
      }
    }
  end:
    cout << ans << endl;
  }
  return 0;
}