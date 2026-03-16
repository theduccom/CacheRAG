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
	int n;
	cin>>n;
	rep(i,n){
		string a,b;
		cin>>a>>b;
		if(a.size()<b.size())swap(a,b);
		while(a.size()!=b.size())b="0"+b;
		for(int i=a.size()-1;i>=0;i--){
			a[i]+=b[i]-'0';
			if(a[i]>'9'){
				a[i]-=10;
				if(i)a[i-1]++;
				else a="1"+a;
			}
		}
		if(a.size()>80)cout<<"overflow"<<endl;
		else cout<<a<<endl;
	}
}