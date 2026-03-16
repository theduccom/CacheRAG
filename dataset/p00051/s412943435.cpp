#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

#define ull unsigned long long
#define ll long long
#define PI 3.141592654

bool order(char a,char b){
	return a > b;
}	

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string line;
		getline(cin,line);
		sort(line.begin(),line.end());
		int a,b;
		sscanf(line.c_str(),"%d",&a);
		sort(line.begin(),line.end(),order);
		sscanf(line.c_str(),"%d",&b);
		cout<<b-a<<endl;
	}	
	return 0;
}