#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <iomanip>
#include <string>
#include <queue>
#include <algorithm>
#include <cctype>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<30;
const double pi=acos(-1);

int a,v1,v2,ans;
char t;
vi l(10);

int main(){
	while(cin>>a){
		l[0]=a;
		for(int i=1;i<10;i++) cin>>t>>l[i];
		cin>>t>>v1>>t>>v2;
		int lon=0;
		for(int i=0;i<10;i++) lon+=l[i];
		double num=lon*((double)v1/(v1+v2));
		for(int i=0;i<10;i++){
			if(num<=l[i]){
				ans=i+1;
				break;
			}
			num-=l[i];
		}
		cout<<ans<<endl;
	}
}