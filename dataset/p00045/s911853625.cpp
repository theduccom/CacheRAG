#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
#include<cmath>
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
	long double in=0,out=0;
	int a,b;
	int co=0;
	char d;
	while(cin>>a>>d>>b){
		in+=a*b;
		out+=b;
		co++;
	}
	out/=co;
	if(out-(int)out>=0.5)out+=1;
	cout<<in<<endl<<(int)out<<endl;

}