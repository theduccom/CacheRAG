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
	char d;
	vector<int>in(10);
	while(cin>>in[0]){
		in[0]*=10000;
		int sum=in[0];
		rep(i,9){
			cin>>d>>in[i+1];
			in[i+1]*=10000;
			sum+=in[i+1];
		}
		int v1,v2;
		cin>>d>>v1>>d>>v2;
		int dis=sum/(v1+v2)*v1;
		bool h=false;
		if(sum%(v1+v2)==0)h=true;
		int sum2=0;
		rep(i,10){
			sum2+=in[i];
			if(sum2>=dis){
				cout<<i+1<<endl;
				break;
			}
		}
	}
}