#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
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
using namespace std;
static const double EPS = 1e-5;
typedef long long ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<n;i++)
#define F first
#define S second
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};

int main(){
	int n;
	for(;cin>>n;){
		int k=1;
		while(n){
			if(n&1){
				cout<<k;
				cout<<(n!=1?' ':'\n');
			}
			n/=2;
			k*=2;
		}
	}
	return 0;
}