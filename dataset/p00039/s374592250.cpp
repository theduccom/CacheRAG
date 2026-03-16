#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll; 
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;

pair<char,int> table[] = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 },
{ 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
string s;
ll ans;
char c;
bool f = 0;

int main(){
	while (cin>>s){
		s += "I";
		ans = 0;
		REP(i, s.size()){
			f = 0;
			REP(j, 7){
				if (s[i] == table[j].first){
					REP(k, 7){
						if (s[i + 1] == table[k].first){
							if (j < k){
								ans += table[k].second - table[j].second;
								f = 1;
							}
							else{
								ans += table[j].second;
							}
						}
					}
				}
			}
			if (f)i++;
		}
		cout << ans << endl;
	}
}