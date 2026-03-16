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

int a[100][100];
int n;
int tmp;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> n,n){
		int x[100];
		rep(i,100) x[i] = 0;
		int sum;
		rep(i,n){
			sum = 0;
			rep(j,n){
				cin >> a[i][j];
				tmp = 10000;
				rep(k,4){
					if(a[i][j]/tmp!=0) break;
					cout << " ";
					tmp /= 10;
				}
				cout << a[i][j];
				sum += a[i][j];
				x[j] += a[i][j];
			}
			tmp = 10000;
			rep(k,4){
				if(sum/tmp!=0) break;
				cout << " ";
				tmp /= 10;
			}
			cout << sum << endl;
		}
		sum = 0;
		rep(i,n){
			sum += x[i];
			tmp = 10000;
			rep(k,4){
				if(x[i]/tmp!=0) break;
				cout << " ";
				tmp /= 10;
			}
			cout << x[i];
		}
		tmp = 10000;
		rep(k,4){
			if(sum/tmp!=0) break;
			cout << " ";
			tmp/=10;
		}
		cout << sum << endl;
	}
}