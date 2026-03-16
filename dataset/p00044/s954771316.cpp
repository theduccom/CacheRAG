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

int nibu(int s,int t,int x){
	if(t-s==1) return s;
	int k=(s+t)/2;
	if(sosu[k]>x) return nibu(s,k,x);
	else return nibu(k,t,x);
}

int main(){
	vector<bool> used(50105,1);
	for(int i=2;i<50100;i++){
		if(used[i]){
			sosu.push_back(i);
			for(int j=i+i;j<=50100;j+=i) used[j]=0;
		}
	}
	while(cin>>n){
		int tmp=nibu(0,sosu.size(),n);
		if(sosu[tmp]==n) cout<<sosu[tmp-1]<<' '<<sosu[tmp+1]<<endl;
		else cout<<sosu[tmp]<<' '<<sosu[tmp+1]<<endl;
	}
}