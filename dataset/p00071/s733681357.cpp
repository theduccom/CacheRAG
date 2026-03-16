#include<iostream>
#include<string>
using namespace std;
bool map[8][8];
int dx[12]={-3,-2,-1,0,0,0,0,0,0,1,2,3};
int dy[12]={0,0,0,-3,-2,-1,1,2,3,0,0,0};
void BOM(int y,int x){
	map[y][x]=false;
	for(int i=0;i<12;i++)if(y+dy[i]>=0&&y+dy[i]<8&&x+dx[i]>=0&&x+dx[i]<8)if(map[y+dy[i]][x+dx[i]]==true)BOM(y+dy[i],x+dx[i]);
}
int main(){
	int v,a,b;
	char z;
	cin>>v;
	for(int u=0;u<v;u++){
		for(int i=0;i<8;i++){for(int j=0;j<8;j++){cin>>z;if(z=='0')map[i][j]=false;else map[i][j]=true;}}
		cin>>a>>b;
		BOM(b-1,a-1);
		cout<<"Data "<<u+1<<":"<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++)cout<<map[i][j];
			cout<<endl;
		}
	}
	return 0;
}