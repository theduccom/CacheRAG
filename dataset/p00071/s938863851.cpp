#include<bits/stdc++.h>
using namespace std;

char field[8][8];

void dfs(int x,int y){
	char a=field[y][x];
	field[y][x]='0';
	if(a=='1'){
		for(int i=-3;i<=3;i++){
			int ax,ay;
			ax=x+i;
			ay=y+i;
			if(0<=ax&&ax<8&&field[y][ax]=='1')dfs(ax,y);
			if(0<=ay&&ay<8&&field[ay][x]=='1')dfs(x,ay);
			}
		}
		return;
	}
	
int main(){
	int n;
	cin>>n;
	
	for(int x=1;x<=n;x++){
		for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)cin>>field[i][j];
		
		int ax,ay;
		cin>>ax>>ay;
		dfs(ax-1,ay-1);
		
		cout<<"Data "<<x<<':'<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<field[i][j];
				}
				cout<<endl;
			}
			
		}
		return 0;
	}	