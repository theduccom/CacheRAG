#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
using namespace std;
int stoi(string x){stringstream ss;ss<<x;int tmp;ss>>tmp;return tmp;}
string itos(int x){stringstream ss;ss<<x;return ss.str();}
int main(){
	int a,b;
	bool first=1;
	while(cin>>a>>b,a||b){
	if(first==0)cout<<endl;
	first=0;
	bool f=0;
	for(int i=a;i<=b;i++){
	if( i%4==0&&i%100!=0 ||i%400==0  ){cout<<i<<endl;f=1;}
	}
	if(f==0)cout<<"NA"<<endl;
	}
	return 0;
}