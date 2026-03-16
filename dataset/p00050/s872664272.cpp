#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cassert>
#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<utility>
#include<numeric>
#include<algorithm>
#include<bitset>
#include<complex>
using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair

template<class T> void pv(T a,T b){for(T i=a;i!=b;++i)cout<<*i<<" ";cout<<endl;}
template<class T> void chmin(T &t,T f){if(t>f)t=f;}
template<class T> void chmax(T &t,T f){if(t<f)t=f;}
int in(){int x;scanf("%d",&x);return x;}

string str;

int main(){
	getline(cin,str);
	int i;
	for(i=0;i<str.size()-4;i++){
		if(str.substr(i,5)=="apple"){
			str[i]='p';
			str[i+1]='e';
			str[i+2]='a';
			str[i+3]='c';
			str[i+4]='h';
		}else if(str.substr(i,5)=="peach"){
			str[i]='a';
			str[i+1]='p';
			str[i+2]='p';
			str[i+3]='l';
			str[i+4]='e';
		}
	}
	cout<<str<<endl;
	return 0;
}