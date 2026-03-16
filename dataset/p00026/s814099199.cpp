#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int m[10][10];
int main(){
	int x,y,size;
	for(;~scanf("%d,%d,%d",&x,&y,&size);){
		m[x][y]++;
		x<9&&m[x+1][y]++;
		y<9&&m[x][y+1]++;
		x>0&&m[x-1][y]++;
		y>0&&m[x][y-1]++;
		if(size>=2){
			x<9&&y<9&&m[x+1][y+1]++;
			x<9&&y>0&&m[x+1][y-1]++;
			x>0&&y<9&&m[x-1][y+1]++;
			y>0&&y>0&&m[x-1][y-1]++;
		}
		if(size==3){
			x<8&&m[x+2][y]++;
			y<8&&m[x][y+2]++;
			x>1&&m[x-2][y]++;
			y>1&&m[x][y-2]++;
		}
	}
	int mx=0,k=0;
	rep(i,10){
		rep(j,10){
			mx=max(mx,m[i][j]);
			if(!m[i][j])k++;
		}
	}
	cout<<k<<endl<<mx<<endl;
	return 0;
}