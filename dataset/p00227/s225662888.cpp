#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
	int n,m;
	while(cin>>n>>m,n||m){
		vector<int> data;
		data.clear();
		int sum = 0;
		for(int i =0; i <n;i++){
			int x;
			cin>>x;
			data.push_back(x);
			sum+=data[i];
		}
		sort(data.begin(),data.end(),greater<int>());
		int t =data.size()/m;
		for(int i =0; i<t;i++){
			sum-=data[i*m+m-1];
		}
		cout <<sum<<endl;
	}
	return 0;
}