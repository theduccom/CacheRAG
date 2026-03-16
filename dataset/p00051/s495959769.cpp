#define _CRT_SECURE_NO_WARNINGS
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

typedef long long Int;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
#define REPS(a,i,n) for(int i = a ; i < n ; ++i)
using namespace std;

int tile[20][20];


int main(){
	int n;
	cin >> n;

	REP(i, n){
		string a,b;
		cin >> a;
		b = a;


		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), greater<char>());

		long c = stoi(b) - stoi(a);

		cout << c << endl;
	}
	return 0;
}