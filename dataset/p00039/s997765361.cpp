#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <math.h>
#include <functional>
#include <algorithm>
#include <utility>
#include <numeric>

typedef long long Int; 
#pragma warning(disable : 4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;

map<char, int> tile;

int main(){
	tile['I'] = 1;
	tile['V'] = 5;
	tile['X'] = 10;
	tile['L'] = 50;
	tile['C'] = 100;
	tile['D'] = 500;
	tile['M'] = 1000;

	string a;
	while (cin >> a){
		Int ans(0);

		char before = 'I';
		for (auto i = a.rbegin(); i != a.rend();++i){
			if (tile[before] > tile[*i]){
				ans -= tile[*i];
			}
			else{
				ans += tile[*i];
			}
			before = *i;
		}

		cout << ans << endl;
	}
	return 0;
}