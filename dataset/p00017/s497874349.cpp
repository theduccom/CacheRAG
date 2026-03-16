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
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<string, ll> PS;
typedef vector<ll> V;

string s, t;

int main(){
	while (getline(cin, s)){
		while (1){
			if (s.find("the") !=string::npos|| s.find("this") !=string::npos||
				s.find("that")!=string::npos){
				cout << s << endl;
				break;
			}
			REP(i, s.size()){
				if (s[i] >= 'a'&&s[i] <= 'z'){
					s[i]--;
					if (s[i] == 'a' - 1)s[i] = 'z';
				}
			}
		}
	}
}