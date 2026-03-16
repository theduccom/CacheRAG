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
	string s;
	int in[3]={0};
	in[0]=1;
	in[1]=2;
	in[2]=3;
	
	while(cin>>s){
		char a = s[0];
		char b = s[2];
		if(a=='#')break;
		int m[333];
		m['A']=0;
		m['B']=1;
		m['C']=2;
		
		swap(in[m[a]], in[m[b]]);
	}
	
	rep(i,3){
		if(in[i]==1){
			if(i==0)puts("A");
			if(i==1)puts("B");
			if(i==2)puts("C");
		}
	}
}