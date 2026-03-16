#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define rep(a,t) for(int a=0;a<t;a++) 
#define forever while(true)
#define Sort(a) sort(a.begin(),a.end())
#define Reverse(a) reverse(a.begin(),a.end())
#define pb push_back

int vx[4] = { 1,-1,0,0 };
int vy[4] = { 0,0,-1,1 };
char grid[100][100]; 
int ret(int x, int y, bool passed[100][100]) {
	if (passed[x][y]) { cout << "LOOP" << endl; return 0; }
	char now = grid[x][y];
	int move = 0;
	if (now == '<') {
		move = 1;
	}
	else if (now == '^') {
		move = 2;
	}
	else if (now == 'v') {
		move = 3;
	}
	else if (now == '.') {
		cout << x << " " << y<<endl;
		return 0;
	}
	passed[x][y] = true;
	return ret(x+vx[move],y+vy[move],passed);
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a, b;
	while (cin >> a >> b) {
		if (a == b&&b == 0) { break; }
		rep(i, a) {
			rep(j, b) {
				cin >> grid[j][i];
			}
		}
		bool hadgone[100][100];
		for (int i = 0; i < 100; i++) {
			rep(j, 100) {
				hadgone[i][j] = false;
			}
		}
		ret(0, 0, hadgone);
	}
	return 0;
}
