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
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e8;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
string s;
int a;
int func();//+-
int num();
int func2();//*/
int func3();//()
int num(){
	int out=0;
	while(isdigit(s[a])){
		out*=10;out+=s[a]-'0';
		a++;
	}
	return out;
}
int func3(){
	int out;
	if(s[a]=='('){
		a++;
		out=func();
		a++;
	}else out=num();
	return out;
}
int func2(){
	int out=func3();
	while(1){
		if(s[a]=='*'){
			a++;
			out*=func3();
		}else if(s[a]=='/'){
			a++;
			out/=func3();
		}else break;
	}
	return out;
}	
int func(){
	int out=func2();
	while(1){
		if(s[a]=='+'){
			a++;out+=func2();
		}else if(s[a]=='-'){
			a++;out-=func2();
		}else break;
	}
	return out;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		a=0;
		cin>>s;
		//s="0+"+s;
		cout<<func()<<endl;
	}
}