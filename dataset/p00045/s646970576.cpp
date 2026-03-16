#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
typedef long long ll;
const int inf=1<<30;
const double pi=acos(-1);

int x,y,sum=0,num=0,n=0;
char t;

int main(){
//	cout<<shosu(0);
	while(cin>>x>>t>>y){
		sum+=x*y;
		num+=y;
		n++;
	}
	cout<<sum<<endl;
	if(!n) cout<<0<<endl;
	else{
		double ans=(double)num/n;
		int tmp=ans;
		if(ans-tmp>=0,5) cout<<tmp+1<<endl;
		else cout<<tmp<<endl;
	}
}