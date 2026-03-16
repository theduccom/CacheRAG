#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>
#include <functional>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,lengthof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = { -1, 0, 1, 0 }; const int dy[] = { 0, 1, 0, -1 };

int main() {
	int n;
	cin >> n;
	while (n--){
		string s1, s2;
		cin >> s1 >> s2;
		string ans = "";
		int s1l = s1.length();
		int s2l = s2.length();
		bool up = false;
		REP(i, max(s1l, s2l)){
			int a = up ? 1 : 0;
			if (s1l - i - 1 >= 0)
				a += s1.c_str()[s1l - i - 1] - '0';
			if (s2l - i - 1 >= 0)
				a += s2.c_str()[s2l - i - 1] - '0';
			up = (a >= 10);
			ans = to_string(a % 10) + ans;
			if (max(s1l, s2l) - i-1 == 0 && up)ans = "1" + ans;
		}
		if (ans.length()<=80)
		cout<<ans<<endl;
		else
			cout << "overflow"<<endl;
	}
}