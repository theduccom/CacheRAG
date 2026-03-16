#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
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
	int q;
	cin>>q;
	while(q--){
		cin>>s;
		a=0;
		cout<<func()<<endl;
	}
}
 
 