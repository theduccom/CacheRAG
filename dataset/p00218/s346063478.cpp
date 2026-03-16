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

int n,a,b,c;

int main(){
	while(1){
		cin>>n;
		if(!n) break;
		for(int i=0;i<n;i++){
			cin>>a>>b>>c;
			if(a==100||b==100||c==100) cout<<'A'<<endl;
			else{
				double A=(a+b+c)/3;
				if((double)(a+b)/2>=90) cout<<'A'<<endl;
				else if(A>=80) cout<<'A'<<endl;
				else if(A>=70) cout<<'B'<<endl;
				else if(A>=50&&(a>=80||b>=80)) cout<<'B'<<endl;
				else cout<<'C'<<endl;
			}
		}
	}
}