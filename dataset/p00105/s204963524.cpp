#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<string.h>
#include<map>

using namespace std;

typedef pair<int,int> pii;

#define rep(i,j) for(int i=0;i<(j);i++)
#define reps(i,j,k) for(int i=j;i<=k;i++)


int main(){
	map<string,vector<int> > m;
	string s;
	vector<string> v;
	char c[1000];
	int n;
	while(~scanf("%s%d",c,&n)){
		s=string(c);
		if(m[s].size()==0)v.push_back(s);
		m[s].push_back(n);
	}
	sort(v.begin(),v.end());
	rep(i,v.size()){
		cout << v[i] << endl;
		int l=m[v[i]].size();
		sort(m[v[i]].begin(),m[v[i]].end());
		rep(j,l)
			printf("%d%c",m[v[i]][j],j==l-1?'\n':' ');
	}
	return 0;
}