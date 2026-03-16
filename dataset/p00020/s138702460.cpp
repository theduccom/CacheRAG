#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
#include <cstring>
#include <vector>
#include <cstdio>
#include <climits>
using namespace std;
#define rep(i,n) for(LL i=0;i<n;i++)
#define all(v)	(v).begin(),(v).end()
#define MOD  1000000007
const int INF = INT_MAX;
typedef long long LL;


int main(){
	string s;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout << s << endl;
	return 0;
}