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
	
	int m[300];
	m['I']=1;
	m['V']=5;
	m['X']=10;
	m['L']=50;
	m['C']=100;
	m['D']=500;
	m['M']=1000;
	string s;
	while(cin>>s){
		s+='#';
	int sum = 0;
		reps(i,1,s.size()){
			if(s[i]!='#' && m[s[i]]>m[s[i-1]]){
				sum -= m[s[i-1]];
			}else{
				sum += m[s[i-1]];
			}
		}
		printf("%d\n",sum);
	}
}