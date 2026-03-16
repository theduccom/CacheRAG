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
	string str;
	map<char, int>Map;
	Map['I']++;
	Map['V'] = 5;
	Map['X'] = 10;
	Map['L'] = 50;
	Map['C'] = 100;
	Map['D'] = 500;
	Map['M'] = 1000;
	char pre_char = 'I';
	
	while (cin >> str) {
		int ans = 0;
		for (int i = 0; i < str.length(); i++) {
			char this_char = str[i];
			if (i == 0) { pre_char = str[i]; continue; }
			if (Map[this_char] > Map[pre_char]) {
				ans -= Map[pre_char];
			}
			else {
				ans += Map[pre_char];
			}
			pre_char = str[i];
		}
		ans += Map[pre_char];
		cout << ans << endl;
	}
	return 0;
}
