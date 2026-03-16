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

int main(){
	vector<bool> used(300000,1);
	for(int i=2;sosu.size()<=10005;i++){
		if(used[i]){
			sosu.push_back(i);
			for(int j=i+i;j<=300000;j+=i) used[j]=0;
		}
	}
//	for(int i=0;i<sosu.size();i++) cout<<sosu[i]<<endl;
	while(1){
		cin>>n;
		if(!n) break;
		int ans=0;
		for(int i=0;i<n;i++) ans+=sosu[i];
		cout<<ans<<endl;
	}
}