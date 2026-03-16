#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;

int main(){
	string n;
	int cnt=0;
	while(cin>>n){
	bool f=1;
	for(int i=0;i<n.size();i++)if(n[i]!=n[n.size()-1-i])f=0;
	if(f)cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}