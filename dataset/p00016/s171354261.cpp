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
	int a,b;
	char c;
	double x=0, y=0, r=0;
	while(1){
		cin>>a>>c>>b;
		if(a==0&&b==0) break;
		x+=a*sin((pi()*r)/180);
		y+=a*cos((pi()*r)/180);
		r+=b;
	}
	cout<<(int)x<<endl;
	cout<<(int)y<<endl;
}