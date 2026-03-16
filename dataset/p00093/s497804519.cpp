#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<25;
const double pi=acos(-1);
const double eps=1e-8;
const vi emp;

int a,b;

int main(){
	bool S=0;
	while(1){
		cin>>a>>b;
		if(!a&&!b) break;
		if(S) cout<<endl;
		bool flag=0;
		for(int i=a;i<=b;i++){
			if(i%4==0){
				if(i%100==0){
					if(i%400==0){
						flag=1;
						cout<<i<<endl;
					}
					continue;
				}
				flag=1;
				cout<<i<<endl;
			}
		}
		if(!flag) cout<<"NA"<<endl;
		S=1;
	}
}