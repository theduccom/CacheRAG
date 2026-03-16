#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <fstream>
#include <set>
#include <utility>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <sstream>
#include <list>
#include <map>

#define rep(i,p,n) for(int i=(int)p;i<(int)n;i++)
#define repp(i,p,n) for(int i=(int)p;i>=(int)n;i--)
#define Sort(x) sort(x.begin(),x.end());
#define ll long long 
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi <vector<vector<vector<int>>> 
#define vc vector<char> 
#define vvc vector<vector<char>>
#define vvvc vector<vector<vector<char>>> 
#define INF 2000000000

using namespace std;

int main() {
	while (1) {
		int n;
		cin >> n;
		if (n == 0)break;

		rep(i, 0, n) {
			int a, b, c;
			cin >> a >> b >> c;

			if (a == 100 || b == 100 || c == 100) {
				cout << "A" << endl;
			}
			else if ((a + b) / 2.0 >= 90) cout << "A" << endl;
			else if ((a + b + c) / 3.0 >= 80)cout << "A" << endl;
			else if ((a + b + c) / 3.0 >= 70) cout << "B" << endl;
			else if ((a + b + c) / 3.0 >= 50 && (a >= 80 || b >= 80))cout << "B" << endl;
			else cout << "C" << endl;
		}
	}

	

	


	return 0;
}