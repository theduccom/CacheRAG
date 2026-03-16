#include<iostream>

using namespace std;

char mymap[9][9]={0};

void solve(int x,int y){
	
	int tx,ty;
	int dx[12]={0,0,0,1,2,3,0,0,0,-1,-2,-3};
	int dy[12]={-1,-2,-3,0,0,0,1,2,3,0,0,0};
	
	mymap[y][x]='0';
	
	//xy垂直水平方向ループ
	for(int i=0;i<12;i++){
		tx=x+dx[i];
		ty=y+dy[i];
		
		if(0<=tx && tx<8 && 0<=ty && tx<8){
			if(mymap[ty][tx]=='1'){
				solve(tx,ty);
			}
		}
	}
	return ;
}

int main(void){
	int n,x,y;
	
	
	cin>>n;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<8;j++){
			cin>>mymap[j];
		}
		cin>>x>>y;
	
		solve(x-1,y-1);
		
		cout<<"Data "<<i+1<<":"<<endl;
		for(int j=0;j<8;j++){
			cout<<mymap[j]<<endl;
		}
	}	
}