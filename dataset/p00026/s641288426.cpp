#include <iostream>
using namespace std;

int field[10][10] = {0};

void small(int x,int y){
	int vx[4] = {-1,0,1,0};
	int vy[4] = {0,-1,0,1};
	if(x>=0 && x<10 && y>=0 && y<10)
		field[x][y]++;
	for(int i=0;i<4;i++){
		if(x+vx[i]>=0 && x+vx[i] <10 && y+vy[i]>=0 && y+vy[i]<10)
			field[x+vx[i]][y+vy[i]]++;
	}	
}
void mid(int x,int y){
	int vx[3] = {-1,0,1};
	int vy[3] = {-1,0,1};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		if(x+vx[i]>=0 && x+vx[i] <10 && y+vy[j]>=0 && y+vy[j]<10)
			field[x+vx[i]][y+vy[j]]++;
		}
	}
}
void large(int x,int y){
	int vx[4] = {-2,0,2,0};
	int vy[4] = {0,-2,0,2};
	mid(x,y);
	for(int i=0;i<4;i++){
		if(x+vx[i]>=0 && x+vx[i] <10 && y+vy[i]>=0 && y+vy[i]<10)
			field[x+vx[i]][y+vy[i]]++;
	}
}

void search()
{
	int m = 0;
	int zerocount = 0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(field[i][j]==0)
				zerocount++;
			m = max(m,field[i][j]);
		}
	}
	cout << zerocount << endl;
	cout << m << endl;
}
int main()
{
	int x,y,size;
	char dot;
	while(cin >> x >> dot >> y >> dot >> size){
		if(size == 1)
			small(x,y);
		else if(size == 2)
			mid(x,y);
		else if(size == 3)
			large(x,y);
	}
	search();
	return 0;
}