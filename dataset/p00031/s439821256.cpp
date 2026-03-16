#include<bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(),vec.end()
typedef long long int ll;
const ll MOD=1000000007;
const ll INF=1000000010;
const ll LINF=4000000000000000010LL;
const int MAX=310;
const double EPS=1e-9;
int dx[4]={0,0,1,-1};
int dy[4]={-1,1,0,0};
int main(){
	int a[13];a[0]=1;
	for(int i=1;i<=9;i++){
		a[i]=a[i-1]*2;
	}
	int n;
	while(cin>>n){
		bool f[10]={false};
		for(int i=9;i>=0;i--){
			if(n>=a[i]){
				f[i]=true;
				n-=a[i];
			}
		}
		vector<int> ans;
		for(int i=0;i<=9;i++){
			if(f[i]){
				ans.push_back(a[i]);
			}
		}
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
			if(i!=ans.size()-1){
				cout<<" ";
			}	
		}
		cout<<endl;
	}	
}

