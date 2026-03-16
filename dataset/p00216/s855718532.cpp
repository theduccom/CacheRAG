#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int f(int i){
	int out;
	if(i>30)out=160;
	else if(i>20)out=140;
	else if(i>10)out=125;
	return out;	
}
int main(){
	int n;
	while(cin>>n,n+1){
		int sum=1150;
		int out=4280;
		loop(i,11,n+1)sum+=f(i);
		cout<<out-sum<<endl;
	}
}