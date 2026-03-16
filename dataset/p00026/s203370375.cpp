
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
#define roop(a,t) for(int a=0;a<t;a++) 
int grid[14][14];
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int u;
	roop(i, 0) { roop(j, 0) { grid[i][j] = 0; } }
	int pow1x[5] = { 0,1,-1,0,0 };
	int pow1y[5] = { 0,0,0,1,-1 };
	int pow2x[9] = { 0,0,0,1,1,1,-1,-1,-1 };
	int pow2y[9] = { -1,0,1,-1,0,1,-1,0,1 };
	int pow3x[13] = { 0 ,0,0,0,0,1,1,1,-1,-1,-1,2,-2 };
	int pow3y[13] = { 2,1,0,-1,-2,1,0,-1,1,0,-1,0,0 };
	int x, y, power;
	char g, h;
	while (cin >> x >> g >> y >> h >> power) {
		
		x += 2; y += 2;
		power = power * 4 + 1;
		if (power == 5) {
			for (int i = 0; i < power; i++) {
				grid[pow1x[i] + x][pow1y[i] + y]++;
			}
		}
		else if (power == 9) {
			for (int i = 0; i < power; i++) {
				grid[pow2x[i] + x][pow2y[i] + y]++;
			}
		}
		else {
			for (int i = 0; i < power; i++) {
				grid[pow3x[i] + x][pow3y[i] + y]++;
			}
		}
	}
	int ans1 = 0;
	int ans2 = 0;
	for (int i = 2; i < 12; i++) {
		for (int j = 2; j < 12; j++) {
			ans2 = max(ans2, grid[i][j]);
			if (grid[i][j] > 0) {
				ans1++;
			}
			/////
			//cout<< grid[i][j]<<" ";
		}//cout<<endl;
	}
	
	cout << 100-ans1 << endl << ans2 << endl;
	return 0;
}
