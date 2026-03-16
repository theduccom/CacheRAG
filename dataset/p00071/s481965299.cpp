#include<iostream>
#include<string>

using namespace std;

char map[8][8];

void solve(int x, int y){
	map[y][x]='0';
	int c[6]={1,2,3,-1,-2,-3};
	for(int i=0;i<2;i++){
		for(int j=0;j<6;j++){
			int a,b;
			a=x;
			b=y;
			if(i==0) a+=c[j];
			else b+=c[j];
			if(0<=a&&a<8&&0<=b&&b<8&&map[b][a]=='1') solve(a,b);
		}
	}
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cin>>map[j][k];
			}
		}
		int x,y;
		cin>>x>>y;
		solve(x-1,y-1);
		cout<<"Data "<<i+1<<":"<<endl;
		for(int j=0;j<8;j++){
			for(int k=0;k<8;k++){
				cout<<map[j][k];
			}
			cout<<endl;
		}
	}
}