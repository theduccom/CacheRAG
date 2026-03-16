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
	double num[21][2];
	int r=1;
	while(scanf("%lf,%lf",&num[r][0],&num[r][1])!=EOF){
		r++;
	}
	double ans=0.0;
	for(int i=2;i<r-1;i++){
		double a,b,c;
		a=sqrt((num[i][0]-num[1][0])*(num[i][0]-num[1][0])+(num[i][1]-num[1][1])*(num[i][1]-num[1][1]));
		b=sqrt((num[i+1][0]-num[1][0])*(num[i+1][0]-num[1][0])+(num[i+1][1]-num[1][1])*(num[i+1][1]-num[1][1]));
		c=sqrt((num[i][0]-num[i+1][0])*(num[i][0]-num[i+1][0])+(num[i][1]-num[i+1][1])*(num[i][1]-num[i+1][1]));
		double y=(a+b+c)/2.0;
		ans+=sqrt(y*(y-a)*(y-b)*(y-c));
	}
	printf("%f\n",ans);
}