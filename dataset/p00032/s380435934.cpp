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
	int a,b,c;
	int t=0,h=0;
	for(;~scanf("%d,%d,%d",&a,&b,&c);){
		if(a*a+b*b==c*c)t++;
		if(a==b)h++;
	}
	cout<<t<<endl<<h<<endl;
	return 0;
}