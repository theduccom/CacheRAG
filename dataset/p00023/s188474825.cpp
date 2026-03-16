#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

double dist(double x1,double y1,double x2,double y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main(){
	int n;
	cin>>n;
	rep(i,0,n){
		double xa,ya,ra,xb,yb,rb,d;
		cin>>xa>>ya>>ra>>xb>>yb>>rb;
		d=dist(xa,ya,xb,yb);
		if(ra>d+rb) o(2);
		else if(rb>d+ra) o(-2);
		else if(d>ra+rb) o(0);
		else o(1);
	}
}