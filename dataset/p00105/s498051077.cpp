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

string s;
int n;
vector<string> vs;
map<string,vi> M;

int main(){
	while(cin>>s>>n){
		M[s].push_back(n);
		vs.push_back(s);
	}
	sort(vs.begin(),vs.end());
	vs.erase(unique(vs.begin(),vs.end()),vs.end());
	for(vector<string>::iterator i=vs.begin();i!=vs.end();i++){
		cout<<*i<<endl;
		sort(M[*i].begin(),M[*i].end());
		int S=M[*i].size()-1;
		for(int j=0;j<S;j++) cout<<M[*i][j]<<' ';
		cout<<M[*i][S]<<endl;
	}
}