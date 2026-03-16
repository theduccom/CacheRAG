#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <climits>
#include <complex>
using namespace std;

#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define EPS 1e-8
#define DEB 1


int main(){
	int n,m;
	int data[1024];
	while(scanf("%d%d",&n,&m),n|m){
		int sum = 0;
		rep(i,n){
			scanf("%d",data+i);
			sum += data[i];
		}
		sort(data,data+n);
		int i;
		for(i=n-m; i>=0; i-=m){
			sum -= data[i];
			//printf("i:%d  data:%d\n",i,data[i]);
		}
		printf("%d\n",sum);
	}
	return 0;
}