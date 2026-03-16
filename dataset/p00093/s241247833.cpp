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
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	bool leap[3001];
	for (int i = 0; i < 3001; i++) {
		int y = i;
		if (y % 4 != 0) { leap[i] = false; }
		else if(y%100!=0){
			leap[i] = true;
		}
		else if (y % 400 != 0) {
			leap[i] = false;
		}
		else {
			leap[i] = true;
		}
	}
	int a, b;
	bool first = true;
	while (cin >> a >> b) {
		bool ever = false;
		if (a == 0 && b == 0) { break; }
		if (!first) { cout << endl; }
		for (int i = a; i <= b; i++) {
			if (leap[i]) { ever = true; cout << i << endl; }
		}
		if (!ever)
		{
			cout << "NA" << endl;
		}first = false;
	}
	return 0;
}
