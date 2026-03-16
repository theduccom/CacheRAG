#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);
const double eps=1e-8;

int n;

int main(){
	while(1){
		cin>>n;
		if(!n) break;
		vvi ans(n+1,vi(n+1));
		for(int i=0;i<n;i++){
			int tmp=0;
			for(int j=0;j<n;j++){
				cin>>ans[i][j];
				tmp+=ans[i][j];
			}
			ans[i][n]=tmp;
		}
		for(int i=0;i<=n;i++){
			int tmp=0;
			for(int j=0;j<n;j++){
				tmp+=ans[j][i];
			}
			ans[n][i]=tmp;
		}
		for(int i=0;i<=n;i++){
			for(int j=0;j<=n;j++){
				cout.width(5);
				cout<<ans[i][j];
			}
			cout<<endl;
		}
	}
}