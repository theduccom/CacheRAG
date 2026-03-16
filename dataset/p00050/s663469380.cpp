#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define MAX 1000000
bool sosu[MAX];
int main(){
	string s;
	getline(cin,s);
	if(s.size()<5){cout<<s<<endl;return 0;}
	
	rep(i,s.size()-4){
		string tmp=s.substr(i,5);
		if(tmp=="apple")s.replace(i,5,"peach");
		else if(tmp=="peach")s.replace(i,5,"apple");
	}
	cout<<s<<endl;
}