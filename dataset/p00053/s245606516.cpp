#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define all(v) (v).begin(), (v).end()
#define rev(s) (s).rbegin(), (s).rend()
#define MP make_pair
#define X first
#define Y second

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;


bool p[1000000];
vector<int> psum;

int main(){
	p[2] = true;
	psum.push_back(2);
	for(int i = 3; i < 1000000; i+=2) p[i] = true;
	for(int i = 3; i < 1000000; i+=2){
		if(p[i]){
			psum.push_back(i);
			for(int j = i; j < 1000000; j+=i) p[j] = false;
		}
	}
	FOR(i, 1, psum.size()) psum[i] += psum[i-1];

	int n;
	while(cin >> n, n){
		cout << psum[n-1] << endl;
	}

	return 0;
}