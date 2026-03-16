// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <locale>
#include <cctype>
#include <sstream>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef map<int, int> MAPII;
typedef vector<pair<int, int> > VPII;

#define MP make_pair
#define fastIO	cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (未test)
// #define FOREACH_IT(it,c)	for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(), c_end=c.end(); it!=c_end; ++it)

// ------------------- include, typedef, define END. -------------------

int main(){
	fastIO;
	int n;
	string bun;
	string before = "Hoshino", after = "Hoshina";
	// cinに続きgetlineする場合は改行読み捨てを行う.
	// 参考：http://wikiwiki.jp/kyopro/?%A5%D7%A5%ED%A5%B0%A5%E9%A5%DF%A5%F3%A5%B0%A4%CE%A5%C6%A5%AF%A5%CB%A5%C3%A5%AF%2F%C6%FE%CE%CF%A4%CE%BD%E8%CD%FD%28C%2CC%2B%2B%29
	
	// 文字列操作 参考：http://minus9d.hatenablog.com/entry/20120519/1337412307

	cin >> n; cin.ignore();
	while (n--){
		getline(cin, bun);
		
		int pos = bun.find(before);
		while (pos != string::npos){
			bun.replace(pos, before.size(), after);
			pos = bun.find(before, pos + after.size());
		}

		cout << bun << endl;
	}
	return 0;
}