#include <iostream>
using namespace std;

char t[10][10];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void solve(int x,int y){
	t[y][x] = '0';

	for(int i=0;i<4;i++){
		for(int j=1;j<=3;j++){
			int nx = x + j * dx[i];
			int ny = y + j * dy[i];

			if(nx>=0 && nx<8 && ny>=0 && ny<8 && t[ny][nx] == '1'){
				solve(nx,ny);
			}
		}
	}
}

int main(void){
	int n;

	cin>>n;

	for(int set=1;set<=n;set++){
		for(int i=0;i<8;i++){
			cin>>t[i];
		}

		int x,y;
		cin>>x>>y;
		solve(x-1,y-1);
		cout<<"Data "<<set<<":\n";
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<t[i][j];
			}
			cout<<endl;
		}
	}

	return 0;
}