#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <bitset>
using namespace std;
#define INF	100000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define SS stringstream
#define rep(i,n) for(int i = 0; i < n; i++)
#define sz(x) ((int)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define clr(a,b) memset((a),(b),sizeof(a))
typedef long long int ll;
typedef pair<int, int> P;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<P> Vp;
typedef priority_queue<P, vector<P>, greater<P> > PQ;

int a,b,t=0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> a >> b){
		if(a == 0 && b == 0) break;
		if(t != 0) cout << endl;
		bool ok = true;
		for(int i = a; i <= b; i++){
			if(i%400==0||(i%100!=0&&i%4==0)){
				ok = false;
				cout << i << endl;
			}
		}
		if(ok) cout << "NA" << endl;
		t++;
	}
}