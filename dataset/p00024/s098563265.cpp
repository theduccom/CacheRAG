#include <iostream>
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

double n;

int main(){
	while(cin>>n){
		int ans;
		for(int i=2;;i++){
			ans=i;
			if(n<=9.8*sqrt((double)(5*i-5)/4.9)) break;
		}
		cout<<ans<<endl;
	}
}