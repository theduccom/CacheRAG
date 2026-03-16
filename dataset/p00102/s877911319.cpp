#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<cmath>
#include<algorithm>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
	int ta[100][100],sum[100];
	int n,all;
	while(cin>>n,n){
	all=0;
	for(int i=0;i<100;i++)sum[i]=0,fill(ta[i],ta[i]+100,0);
	for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>ta[i][j];
	for(int i=0;i<n;i++){
		int tnow=0;
		for(int j=0;j<n;j++){
		string ss=itos(ta[i][j]);
		for(int i=0;i<5-ss.size();i++)cout<<" ";	
		cout<<ta[i][j];
		sum[j]+=ta[i][j];
		tnow+=ta[i][j];
		all+=ta[i][j];
		}
		string ss=itos(tnow);
		for(int i=0;i<5-ss.size();i++)cout<<" ";
		cout<<tnow<<endl;
	}
	for(int i=0;i<n;i++){
	string ss=itos(sum[i]);
	for(int i=0;i<5-ss.size();i++)cout<<" ";
	cout<<sum[i];
	if(i==n-1){ss=itos(all);for(int i=0;i<5-ss.size();i++)cout<<" ";}
	}
	cout<<all<<endl;
	}

	return 0;
}