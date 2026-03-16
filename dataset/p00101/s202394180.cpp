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
string str;

int main(){
	cin >> n;
	cin.ignore();
	rep(i,n){
		getline(cin,str);
		if(str.size() < 7){
			cout << str << endl;
			continue;
		}
		rep(j,str.size()-6){
			if(str[j]=='H'&&str[j+1]=='o'&&str[j+2]=='s'&&str[j+3]=='h'&&str[j+4]=='i'&&str[j+5]=='n'&&str[j+6]=='o'){
				str[j+6]='a';
			}
		}
		cout << str << endl;
	}
}