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
#include <utility>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define sort(ss) sort(ss.begin(), ss.end())
#define rsort(ss) sort(ss.rbegin(), ss.rend())
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return acos(-1.0);
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
double x[30]={},y[30]={},ans,ss;
double abs(double i,double e){
	if(e-i>=0) return e-i;
	return i-e;
}
double leng(double xx,double yy){
	return sqrt(pow(xx,2.0)+pow(yy,2.0));
}
int main(){
	int i=0;
	char sr;
	while(cin>>x[i]>>sr>>y[i]){
		i++;
	}
//	cout<<i<<endl;
	double a,b,c,ans=0,g,f,d;
	for(int e=1;e<=i-2;e++){
		a=leng(abs(x[0],x[e]),abs(y[0],y[e]));
		b=leng(abs(x[0],x[e+1]),abs(y[0],y[e+1]));
		c=leng(abs(x[e],x[e+1]),abs(y[e],y[e+1]));
//		cout<<a<<" "<<b<<" "<<c<<endl;
		double z=(a+b+c)/2.0;
//		cout<<sqrt(z*(z-a)*(z-b)*(z-c))<<endl;
		ans+=sqrt(z*(z-a)*(z-b)*(z-c));
	}
	printf("%lf\n", ans);
}