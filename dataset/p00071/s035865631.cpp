#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>

typedef long long int ll;


using namespace std;

int n;

string t;
string s[8];


void calc(int x,int y){
	if(x<0||y<0||x>=8||y>=8)return;
	//cout<<x<<" "<<y<<endl;
	if(s[y][x]=='1'){
		s[y][x]='0';
		for(int i=1; i<=3; i++){
			calc(x+i,y);
			calc(x-i,y);
			calc(x,y+i);
			calc(x,y-i);
		}
	}
}

int main(){
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=0; j<8; j++){
			cin>>t;
			s[j]=t;
		}
		int x,y;
		cin>>x>>y;
		calc(x-1,y-1);
		//cout<<"test"<<endl;
		cout<<"Data "<<i+1<<":"<<endl;
		for(int j=0; j<8; j++){
			cout<<s[j]<<endl;
		}
	}
}