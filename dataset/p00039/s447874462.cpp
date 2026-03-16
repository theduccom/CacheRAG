#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <cstdio>
#include <set>
#include <map>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> P;


int main(){
	map<char, int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

	string s;
	while(cin >> s){
		int ans = 0;
		rep(i, s.size()-1) ans += (m[s[i+1]]>m[s[i]]?-1:1)*m[s[i]]; 
		ans += m[s[s.size()-1]];
		cout << ans << endl;
	}

	return 0;
}