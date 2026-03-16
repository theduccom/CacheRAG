#include<iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#include<sstream>
#include<algorithm>
#include<map>
#include<complex>
using namespace std;


#define li			long long int
#define rep(i,to)	for(int i=0;i<((int)(to));i++)
#define repp(i,start,to)	for(int i=(int)(start);i<((int)(to));i++)
#define pb			push_back
#define sz(v)		((li)(v).size())
#define bgn(v)		((v).begin())
#define eend(v)		((v).end())
#define allof(v)	(v).begin(), (v).end()
#define dodp(v,n)		memset(v,(li)n,sizeof(v))
#define bit(n)		(1ll<<(li)(n))
#define mp(a,b)		make_pair(a,b)
#define rin	rep(i,n)
#define EPS 1e-10
#define ETOL 1e-8
#define MOD 1000000007
#define p2(a,b)		cout<<a<<"\t"<<b<<endl
#define p3(a,b,c)		cout<<a<<"\t"<<b<<"\t"<<c<<endl


string sum(string a, string b){
	string res="";
	if(sz(a)<sz(b))swap(a,b);
	li n=sz(a);
	li nb=sz(b);
	rep(i,n-nb)b="0"+b;
	li c=0;
	//p2(a,b);
	for(li i=n-1; i>=0; i--){
		li now=c+(a[i]-'0')+(b[i]-'0');
		res=(char)(now%10+'0')+res;
		c=now/10;
	}
	if(c>0)res=(char)(c+'0')+res;
	if(sz(res)>80)return "overflow";
	return res;
}

int main(){
	li n;
	cin>>n;
	rin{
		string a,b;
		cin>>a>>b;
		cout<<sum(a,b)<<endl;
	}
	
	return 0;
}