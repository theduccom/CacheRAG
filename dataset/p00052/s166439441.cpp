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

int main(){
	while(1){
		cin>>n;
		if(!n) break;
		int ans=0;
		for(int i=5;i<=n;i*=5){
			for(int j=1;i*j<=n;j++) ans++;
		}
		cout<<ans<<endl;
	}
}