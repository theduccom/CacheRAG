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

int n;

int main(){
	while(cin>>n){
		int two=1;
		vi ans;
		for(int i=0;i<10;i++){
			two*=2;
			if(n%two){
				n-=two/2;
				ans.push_back(two/2);
			}
		}
		for(int i=0;i<ans.size()-1;i++) cout<<ans[i]<<' ';
		cout<<ans[ans.size()-1]<<endl;
	}
}