#include<cstdio>
#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include<map>
#include<set>
#include<complex>
#include<stack>
#include<cmath>
 
using namespace std;
 
#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

#define X real()
#define Y imag()
typedef complex<double> P;

int main(){
	
	string s;
	while(cin>>s){
		string str="";
		rep(i,s.size()){
			if(s[i]=='@'){
				int cnt=(s[i+1]-'0');
				rep(j,cnt)str+=s[i+2];
				i+=2;
			}else{
				str+=s[i];
			}
		}
		cout<<str<<endl;
	}
	
}