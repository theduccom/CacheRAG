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
#define CLR(a) memset((a), 0 ,sizeof(a))

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
	vector<int> card(5);
	char c;
	while (cin >> card[0] >> c >> card[1] >> c >> card[2] >> c >> card[3] >> c >> card[4]){
		SORT(card);
		int pair = 0;
		for (int i = 0; i < 4;i++){
			for (int j = i + 1; j < 5; j++){
				if (card[i] == card[j])
					pair++;
			}
		}
		bool st = true;
		REP(i, 4){
			if (card[i] + 1 != card[i + 1])
				st = false;
		}
		if (card[0] == 1 && card[1] == 10 && pair == 0)
			st = true;
		if (pair == 6)
			cout << "four card" << endl;
		else if (pair==4)
			cout << "full house" << endl;
		else if (st )
			cout << "straight" << endl;
		else if (pair==3 )
			cout << "three card" << endl;
		else if (pair==2 )
			cout << "two pair" << endl;
		else if (pair==1 )
			cout << "one pair" << endl;
		else
			cout << "null" << endl;
	}
}