#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cctype>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

bool find(const vvi& a,const vvi& fig)
{
	rep(i,9-fig.size()){
		rep(j,9-fig[0].size()){
			bool ok=true;
			rep(k,fig.size()){
				rep(l,fig[0].size()){
					if(a[i+k][j+l]!=fig[k][l])
						ok=false;
				}
			}
			if(ok)
				return true;
		}
	}
	return false;
}

int main()
{
	vector<vvi> fig(7);
	fig[0]=vvi(2,vi(2));
	fig[0][0][0]=fig[0][0][1]=fig[0][1][0]=fig[0][1][1]=1;
	fig[1]=vvi(4,vi(1));
	fig[1][0][0]=fig[1][1][0]=fig[1][2][0]=fig[1][3][0]=1;
	fig[2]=vvi(1,vi(4));
	fig[2][0][0]=fig[2][0][1]=fig[2][0][2]=fig[2][0][3]=1;
	fig[3]=vvi(3,vi(2));
	fig[3][0][1]=fig[3][1][0]=fig[3][1][1]=fig[3][2][0]=1;
	fig[4]=vvi(2,vi(3));
	fig[4][0][0]=fig[4][0][1]=fig[4][1][1]=fig[4][1][2]=1;
	fig[5]=vvi(3,vi(2));
	fig[5][0][0]=fig[5][1][0]=fig[5][1][1]=fig[5][2][1]=1;
	fig[6]=vvi(2,vi(3));
	fig[6][0][1]=fig[6][0][2]=fig[6][1][0]=fig[6][1][1]=1;
	for(string s;cin>>s;){
		vvi a(8,vi(8));
		rep(i,8)
			a[0][i]=s[i]-'0';
		repi(i,1,8){
			cin>>s;
			rep(j,8)
				a[i][j]=s[j]-'0';
		}
		rep(i,fig.size()){
			if(find(a,fig[i])){
				cout<<char(i+'A')<<endl;
				break;
			}
		}
	}
	
	return 0;
}