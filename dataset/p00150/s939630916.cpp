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
typedef multimap<int, string, greater<int> > MuMIS;

#define MP make_pair
#define fastIO	cin.tie(0); ios::sync_with_stdio(false);
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
//for gcc (未test)
// #define FOREACH_IT(it,c)	for(typeof(c)::iterator it=(c).begin(); it!=(c).end(); ++it)
//for Visual Studio
#define foreach_it(type,it,c) for(type::iterator it=c.begin(), c_end=c.end(); it!=c_end; ++it)

// ------------------- include, typedef, define END. -------------------

bool primeCheck(int candidate){
	for (int i = 3; i <= sqrt(candidate); i += 2){
		if (candidate%i == 0)
			return false;
	}
	return true;
}

void kakunou(VPII &primeList){
	for (int i = 3; i < 10000; i += 2){
		if (primeCheck(i))
			if (primeCheck(i + 2))
				primeList.push_back(MP(i, i + 2));
	}
}

int main(){
	fastIO;
	VPII primeList;
	int n = 0;

	kakunou(primeList);

	while (cin >> n, n){
		for (int i = n; i >= 5; i--){
			if (count(primeList.begin(), primeList.end(), MP(i - 2, i)) == 1){
				cout << (i - 2) << " " << i << endl;
				break;
			}
		}
	}

	return 0;
}