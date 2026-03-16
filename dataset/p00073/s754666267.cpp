#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
int main(){
	double a,b;
	while(scanf("%lf %lf",&a,&b) && a+b!=0.0){
		double w=sqrt(a*a/4.0+b*b);
		double ans=w*a*2.0;
		ans+=a*a;
		printf("%f\n",ans);
	}
}