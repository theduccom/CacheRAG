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

int n,r;
vi d(3);

int main(){
	while(1){
		cin>>d[0]>>d[1]>>d[2];
		if(d[0]+d[1]+d[2]==0) break;
		sort(d.begin(),d.end());
		double tmp=(double)sqrt(d[0]*d[0]+d[1]*d[1]);
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>r;
			if(2*r>tmp) cout<<"OK"<<endl;
			else cout<<"NA"<<endl;
		}
	}
}