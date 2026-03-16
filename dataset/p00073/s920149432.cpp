#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int x,h;
	double ssr,sr;
	while(1){
		cin>>x;
		cin>>h;
		if(x==0&&h==0) break;
		sr=sqrt(h*h+(x*x)/4.0);
		ssr=sr*x*2+x*x;
		printf("%.8lf\n", ssr);
	}
}