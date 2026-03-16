#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
int ta[4];
string dx[]={"A","B","AB","O"};
int main(){
	
	int a;string b;
	while(cin>>a){
	cin.ignore();cin>>b;
	for(int j=0;j<4;j++)if(b==dx[j])ta[j]++;
	}
	for(int j=0;j<4;j++)cout<<ta[j]<<endl;
	return 0;
}