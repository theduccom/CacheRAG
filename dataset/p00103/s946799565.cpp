#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
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

int n;
int out = 0,point = 0;
bool base[3];
string str;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	while(true){
		cin >> str;
		if(str[0] == 'O'){
			out++;
			if(out%3 == 0){
				cout << point << endl;
				point = 0;
				rep(i,3) base[i] = 0;
			}
			if(out == n*3) break;
		} else if(str[1] == 'O'){
			point++;
			rep(i,3) if(base[i]) point++;
			rep(i,3) base[i] = 0;
		} else{
			if(base[2]) point++;
			if(base[1]) base[2] = 1;
			if(base[0]) base[1] = 1;
			base[0] = 1;
		}
	}
}