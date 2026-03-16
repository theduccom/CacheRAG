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


int main(){
	
	string A = "apple";
	string B = "peach";
	string a;
	getline(cin,a);
	
	rep(i,a.size()-A.size()+1){
		if(a[i]=='a'){
			bool ok = true;
			rep(j,A.size())if(a[i+j]!=A[j])ok=false;
			if(ok) a = a.substr(0,i)+B+a.substr(i+B.size());
		}else if(a[i]=='p'){
			bool ok = true;
			rep(j,A.size())if(a[i+j]!=B[j])ok=false;
			if(ok) a = a.substr(0,i)+A+a.substr(i+B.size());
		}
	}
	cout<<a<<endl;
	
}