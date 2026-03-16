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

int main(){
	getline(cin,s);
	for(string::iterator i=s.begin();i!=s.end()-4;i++){
		if(*i=='a'&&*(i+1)=='p'&&*(i+2)=='p'&&*(i+3)=='l'&&*(i+4)=='e'){
			*i='p';
			*(i+1)='e';
			*(i+2)='a';
			*(i+3)='c';
			*(i+4)='h';
		}
		else if(*i=='p'&&*(i+1)=='e'&&*(i+2)=='a'&&*(i+3)=='c'&&*(i+4)=='h'){
			*i='a';
			*(i+1)='p';
			*(i+2)='p';
			*(i+3)='l';
			*(i+4)='e';
		}
	}
	cout<<s<<endl;
}