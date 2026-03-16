#include <iostream>
using namespace std;

int ax[]={1, 0, 1};
int ay[]={0, 1, 1};

int bx[]={0, 0, 0};
int by[]={1, 2, 3};

int cx[]={1, 2, 3};
int cy[]={0, 0, 0};

int dx[]={-1, 0, -1};
int dy[]={1, 1, 2};

int ex[]={1, 1, 2};
int ey[]={0, 1, 1};

int fx[]={0, 1, 1};
int fy[]={1, 1, 2};

int gx[]={1, -1, 0};
int gy[]={0, 1, 1};


int main(){
	char map[12][12];
	int x, y;

	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			map[i][j]=0;
		}
	}

	while(1){
		for(int i=0; i<8; i++)
			cin>>map[i];

		if(cin.eof())break;

		x=y=0;
		for(int i=0; i<64; i++){
			if(map[i/8][i%8]=='1'){
				x=i%8;
				y=i/8;
				break;
			}
		}

		if(map[y+ay[0]][x+ax[0]]=='1'&&map[y+ay[1]][x+ax[1]]=='1'&&map[y+ay[2]][x+ax[2]]=='1')
			cout<<"A\n";
		else if(map[y+by[0]][x+bx[0]]=='1'&&map[y+by[1]][x+bx[1]]=='1'&&map[y+by[2]][x+bx[2]]=='1')
			cout<<"B\n";
		else if(map[y+cy[0]][x+cx[0]]=='1'&&map[y+cy[1]][x+cx[1]]=='1'&&map[y+cy[2]][x+cx[2]]=='1')
			cout<<"C\n";
		else if(map[y+dy[0]][x+dx[0]]=='1'&&map[y+dy[1]][x+dx[1]]=='1'&&map[y+dy[2]][x+dx[2]]=='1')
			cout<<"D\n";
		else if(map[y+ey[0]][x+ex[0]]=='1'&&map[y+ey[1]][x+ex[1]]=='1'&&map[y+ey[2]][x+ex[2]]=='1')
			cout<<"E\n";
		else if(map[y+fy[0]][x+fx[0]]=='1'&&map[y+fy[1]][x+fx[1]]=='1'&&map[y+fy[2]][x+fx[2]]=='1')
			cout<<"F\n";
		else if(map[y+gy[0]][x+gx[0]]=='1'&&map[y+gy[1]][x+gx[1]]=='1'&&map[y+gy[2]][x+gx[2]]=='1')
			cout<<"G\n";

	}
	return 0;
}