#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8
#define F first
#define S second

static const double PI=6*asin(0.5);
typedef pair<double,double> P;
typedef complex<double> CP;
typedef long long ll;


double dist1,dist2,dist3;
double tx,ty;
vector<CP> p;
CP O(0.0,0.0);
double squ(double a,double b,double c){
	double s=(a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

double dis(CP a,CP b){
	CP c((real(a)-real(b)),imag(a)-imag(b));
	return sqrt(real(c)*real(c)+imag(c)*imag(c));
}

char t;
int main(){
	while(cin>>tx>>t>>ty){
		CP tp(tx,ty);
		p.PB(tp);
	}
	double res=0;
	CP tp(p[0].real(),p[0].imag());
	p.PB(tp);
	dist1=dis(p[0],O);
	rep(i,p.size()-1){
		int j=i+1;
		dist2=dis(p[j],O);
		dist3=dis(p[j-1],p[j]);
		res+=squ(dist1,dist2,dist3);
		dist1=dist2;
	}
	printf("%.6f",res);
	return 0;
}