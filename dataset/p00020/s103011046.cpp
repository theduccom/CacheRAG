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
	
	string a;
	getline(cin,a);
	
	rep(i,a.size()){
		if(a[i]<='z' && 'a'<=a[i]){
			a[i] += 'A'-'a';
		}
	}
	
	cout<<a<<endl;
}