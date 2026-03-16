#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>
 
#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
 
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
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		int numcount[10]={0};
		for(int j=0;j<8;j++){
			numcount[s[j]-'0']++;
		}

		int maxnum = 0,minnum = 0;
		for(int j=0;j<10;j++){
			for(int k=0;k<numcount[j];k++){
				minnum *= 10;
				minnum += j;
				
			}
		}

		for(int j=9;j>=0;j--){
			for(int k=0;k<numcount[j];k++){
				maxnum *= 10;
				maxnum += j;
				
			}
		}

		cout << maxnum - minnum << endl;
	}
}