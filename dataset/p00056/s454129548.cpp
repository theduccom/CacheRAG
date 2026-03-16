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

int n;
vi sosu;
map<int,bool> m;

int main(){
	vector<bool> used(50005,1);
	for(int i=2;i<50000;i++){
		if(used[i]){
			sosu.push_back(i);
			m[i]=1;
			for(int j=i;j<50000;j+=i) used[j]=0;
		}
	}
	while(1){
		cin>>n;
		if(!n) break;
		int ans=0;
		if(n%2){
			if(m[n-2]) cout<<1<<endl;
			else cout<<0<<endl;
			continue;
		}
		for(int i=0;sosu[i]<=n/2;i++){
			if(m[n-sosu[i]]) ans++;
		}
		cout<<ans<<endl;
	}
}