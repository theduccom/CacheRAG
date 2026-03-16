#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	vector<double>a(3);
	while(cin>>a[0]>>a[1]>>a[2],a[0]){
		sort(all(a));
		double r=hypot(a[0],a[1])/2;
		int n;
		cin>>n;
		rp(n){
			int m;cin>>m;
			if(m>r)cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
}