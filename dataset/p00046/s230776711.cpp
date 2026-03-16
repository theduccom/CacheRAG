#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <utility>

using namespace std;

#define FOR(i,a,b) for(long long int i=(a);i<(b);i++)
#define REP(i,N) for(long long int i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()

#define PI 3.14159265358479

typedef long long ll;

double a, mi = -1, ma = -1;

int main(){
	while (cin>>a){
		if (mi + ma < 0){
			mi = a;
			ma = a;
		}
		else{
			mi = min(mi, a);
			ma = max(ma, a);
		}
	}
	cout << ma - mi;

}