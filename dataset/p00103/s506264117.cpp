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
string str;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int out=0,ans=0;
		vector<bool> base(3);
		while(out<3){
			cin>>str;
			if(str=="OUT") out++;
			else if(str=="HIT"){
				for(int j=2;j>=0;j--){
					if(base[j]){
						if(j+1>2) ans++;
						else base[j+1]=1;
						base[j]=0;
					}
				}
				base[0]=1;
			}
			else{
				for(int j=0;j<3;j++){
					if(base[j]) ans++;
					base[j]=0;
				}
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}