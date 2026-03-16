#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <ctime>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

void explode(vs& field,int x,int y)
{
	field[y][x]='0';
	for(int i=1;i<=3;i++){
		int nx,ny;
		nx=x+i;ny=y;
		if(0<=nx && nx<8 && 0<=ny && ny<8 && field[ny][nx]=='1')
			explode(field,nx,ny);
		nx=x-i;ny=y;
		if(0<=nx && nx<8 && 0<=ny && ny<8 && field[ny][nx]=='1')
			explode(field,nx,ny);
		nx=x;ny=y+i;
		if(0<=nx && nx<8 && 0<=ny && ny<8 && field[ny][nx]=='1')
			explode(field,nx,ny);
		nx=x;ny=y-i;
		if(0<=nx && nx<8 && 0<=ny && ny<8 && field[ny][nx]=='1')
			explode(field,nx,ny);
	}
}

int main()
{
	int n;
	cin>>n;
	for(int tc=1;tc<=n;tc++){
		vs field(8);
		rep(i,8)
			cin>>field[i];
		int x,y;
		cin>>x>>y;
		explode(field,x-1,y-1);
		cout<<"Data "<<tc<<":"<<endl;
		rep(i,8)
			cout<<field[i]<<endl;
	}
	
	return 0;
}