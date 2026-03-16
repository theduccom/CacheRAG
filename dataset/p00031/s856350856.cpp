#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	int n;
	while(~scanf("%d",&n)){
		bool f = false;
		for(int i=0; (1<<i)<=n; i++)if( n&(1<<i) ){
			if( f )putchar(' ');
			printf("%d",1<<i);
			f = true;
		}
		puts("");
	}
	return 0;
}