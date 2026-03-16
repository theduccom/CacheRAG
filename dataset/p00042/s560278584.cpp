#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int parse(string a){
int s=0;
for(char b:a){
	s*=10;
	s+=b-48;
}
return s;
}
vector<int>split(string a){
	vector<int>b;
	string c="";
	for(char d:a){
		if(d==','){b.push_back(parse(c));c="";}
		else c+=d;
	}
	b.push_back(parse(c));
	return b;
}
int main() {
	int u=1;
 int a,b;
 while(cin>>b,b){
 	cin>>a;
 vector<vector<int>>dp(a+1,vector<int>(b+1));
 for(int c=0;c<a;c++){
 	string q;
 	cin>>q;
 	int d,e;
 	d=split(q)[0];
 	e=split(q)[1];
 	for(int f=0;f<b+1;f++){
 		if(f<e)dp[c+1][f]=dp[c][f];
 		else dp[c+1][f]=max(dp[c][f],dp[c][f-e]+d);
 	}
 }
 cout<<"Case "<<u<<":"<<endl;
 int y=0,z=0;
 for(int x=0;x<b+1;x++){
 	if(dp[a][x]>y){y=dp[a][x];z=x;}
 }
 cout<<y<<endl<<z<<endl;
 u++;
 }
}