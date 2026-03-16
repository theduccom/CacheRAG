#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <cassert>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <numeric>
#include <list>
#include <iomanip>
#include <iterator>

using namespace std;

typedef long long ll;
typedef pair<int,int> Pii;
typedef pair<ll,ll> Pll;
 
int main(){
	int n;
	while(cin>>n,n){
		vector< vector<int> > v(n+1,vector<int>(n+1));
		for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin>>v[i][j];
		for(int i = 0; i < n; i++){
			int a = 0;
			for(int j = 0; j < n; j++) a += v[i][j];
			v[i][n] = a;
		}
		{
			int a = 0;
			for(int j = 0; j < n; j++) a += v[j][n];
			v[n][n] = a;
		}
		for(int i = 0; i < n; i++){
			int a = 0;
			for(int j = 0; j < n; j++) a += v[j][i];
			v[n][i] = a;
		}
		for (int i = 0; i <= n; i++){
			for (int j = 0; j <= n; j++){
				printf("%5d",v[i][j]);
			}
			puts("");
		}
	}
    return 0;
}