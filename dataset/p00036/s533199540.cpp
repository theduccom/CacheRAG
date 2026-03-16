#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8


const int type[][2][4] = {
	{
		{0,1,0,1}, //a
		{0,0,1,1}
	},
	{
		{0,0,0,0}, //b
		{0,1,2,3}
	},
	{
		{0,1,2,3}, //c
		{0,0,0,0}
	},
	{
		{0,0,-1,-1}, //d
		{0,1,1,2}
	},
	{
		{0,1,1,2}, //e
		{0,0,1,1}
	},
	{
		{0,0,1,1}, //f
		{0,1,1,2}
	},
	{
		{0,1,-1,0}, //g
		{0,0,1,1}
	}
};
char field[8][9];

bool ok(int k, int x, int y){
	rep(i,4){
		int tx = x + type[k][0][i];
		int ty = y + type[k][1][i];
		if( tx<0 || ty<0 || tx>=8 || ty>=8 || field[ty][tx]=='0' ) return false;
	}
	return true;
}

int main(){
	
	while(~scanf("%s",field[0])){
		REP(i,1,8)scanf("%s",field[i]);
		bool f = false;
		int ans = -1;
		rep(i,8){
			rep(j,8){
				if( field[i][j]=='1' ){
					int k;
					for(k=0; k<7; k++)if( ok(k,j,i) ){
						f = true; ans = k;
					}
					if( f ) break;
				}
			}
			if( f ) break;
		}
		printf("%c\n",'A'+ans);
	}
	return 0;
}