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
typedef pair<string, int> P;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<P> Vp;
typedef priority_queue<P, vector<P>, greater<P> > PQ;

string word;
int page;
Vp book;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> word >> page) book.pb(P(word,page));
	SORT(book);
	cout << book[0].fi << endl << book[0].sec;
	for(int i = 1; i < book.size(); i++){
		if(book[i-1].fi == book[i].fi) cout << " " << book[i].sec;
		else cout << endl << book[i].fi << endl << book[i].sec;
	}
	cout << endl;
}