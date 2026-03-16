#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>
#include <cstdio>
#include <vector>
#include <cstdio>
#include <climits>
using namespace std;
#define rep(i,n) for(LL i=0;i<n;i++)
#define all(v)	(v).begin(),(v).end()
#define MOD  1000000007
const int INF = INT_MAX;
typedef long long LL;
int five[20001];
int main(){
	int n;
	
	int i = 5;
	while (i < 20001){
		for (int j = 1; j*i < 20001; j++){
			five[j*i]++;
		}
		i *= 5;
	}
	while (cin >> n){
		if (n == 0) break;
		int ans = 0;
		for (int j = 1; j <= n; j++){
			ans += five[j];
		}
		cout << ans << endl;
	}
	return 0;
}