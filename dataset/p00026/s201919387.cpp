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
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	int in[14][14]={0};
	char d;
	int a,b,c;
	while(cin>>b>>d>>a>>d>>c){
		a+=2;b+=2;
		if(c==2)
			loop(i,-1,2)loop(j,-1,2)in[a+i][b+j]++;
		else if(c==1){
			loop(i,-1,2)loop(j,-1,2)if(i*j==0)in[a+i][b+j]++;
		}else{
			loop(i,-2,3)loop(j,-2,3)if(i*j==0||(abs(i)!=2&&abs(j)!=2))in[a+i][b+j]++;
		}
	}
	int co=0,ma=0;
	loop(i,2,12)loop(j,2,12){
		if(!in[i][j])co++;
		ma=max(ma,in[i][j]);
	}
	cout<<co<<endl;
	cout<<ma<<endl;
}