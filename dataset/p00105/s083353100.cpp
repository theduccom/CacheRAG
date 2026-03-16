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
typedef pair<string,int> P;
int n;
int main(){
	string str;
	map<string,std::vector<int> > data;
	while(cin>>str>>n){
		data[str].push_back(n);
	}
	map<string,vector<int> >::iterator it =data.begin();
	for(;it!=data.end();it++){
		cout <<(*it).first<<endl;
		vector<int>v =(*it).second;
		sort(v.begin(),v.end());
		for(int i = 0;i <v.size();i++){
			if(i)cout <<" ";
			cout <<v[i];
		}
		cout <<endl;
	}
	return 0;
}