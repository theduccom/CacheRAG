#include<iostream>
#include<string>
#define COL 8
#define ROW 8
int field[COL][ROW];
using namespace std;

void Release(int y, int x){
	int i, j;
	if(field[y][x] == 0) return;
	field[y][x] = 0;
	for(i=1;i<=3;i++) if(x-i >= 0)  Release(y, x-i);
	for(i=1;i<=3;i++) if(x+i < ROW) Release(y, x+i);
	for(i=1;i<=3;i++) if(y-i >= 0)  Release(y-i, x);
	for(i=1;i<=3;i++) if(y+i < COL) Release(y+i, x);
	return;
}

int main(){
	string str;
	int n,i,j, loop, x, y;
	cin>>n;
	for(loop=0;loop<n;loop++){
		for(i=0;i<COL;i++){
			cin>>str;
			for(j=0;j<ROW;j++){
				field[i][j] = str[j] - '0';
			}
		}
		cin>>x>>y;
		Release(y-1, x-1);
		cout<<"Data "<<loop+1<<":\n";
		for(i=0;i<COL;i++){
			for(j=0;j<ROW;j++){
				cout<<field[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}