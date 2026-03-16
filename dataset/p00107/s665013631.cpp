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
	int che[3];
	while(cin>>che[0]>>che[1]>>che[2],che[0]||che[1]||che[2]){
		sort(che,che+3);
		int R =che[0]*che[0]+che[1]*che[1];
		int n;
		cin>>n;
		rep(i, n){
			int r;
			cin>>r;
			r =2*r*2*r;
			if(r>R){
				cout <<"OK"<<endl;
			}else{
				cout <<"NA"<<endl;
			}
		}
		

	}
	return 0;
}