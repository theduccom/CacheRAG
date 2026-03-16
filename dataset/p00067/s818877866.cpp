#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <complex>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm>
#include <numeric>
#include <typeinfo>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define foreach(i,c) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

void sink(vs& grid,int i,int j)
{
	if(i<0 || 12<=i || j<0 || 12<=j)
		return;
	if(grid[i][j]=='0')
		return;
	grid[i][j]='0';
	
	sink(grid,i-1,j);
	sink(grid,i+1,j);
	sink(grid,i,j-1);
	sink(grid,i,j+1);
}

int solve(vs& grid)
{
	int res=0;
	rep(i,12)
		rep(j,12){
			if(grid[i][j]=='1'){
				res++;
				sink(grid,i,j);
			}
		}
	return res;
}

int main()
{
	for(string s;!cin.eof();getline(cin,s)){
		vs grid(12);
		getline(cin,grid[0]);
		if(grid[0].size()==0)
			break;
		repi(i,1,12)
			getline(cin,grid[i]);
		
		cout<<solve(grid)<<endl;
	}
	
	return 0;
}