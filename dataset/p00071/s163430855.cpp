#include <iostream>
#include <string>
#define N 8
using namespace std;

string m[N];

void bomb(int x,int y){
	if(!(0<=x&&x<N&&0<=y&&y<N))return;
	if(m[x][y]!='1')return;
	m[x][y]='0';
	bomb(x+1,y);
	bomb(x+2,y);
	bomb(x+3,y);
	bomb(x-1,y);
	bomb(x-2,y);
	bomb(x-3,y);
	bomb(x,y+1);
	bomb(x,y+2);
	bomb(x,y+3);
	bomb(x,y-1);
	bomb(x,y-2);
	bomb(x,y-3);
}
int main(void){
	int n;
	int x,y;
	cin>>n;
	for(int X=1;X<=n;X++){
		int c=0;
		for(int i=0;i<N;i++)cin>>m[i];
		cin>>y>>x;
		bomb(x-1,y-1);
		cout<<"Data "<<X<<":"<<endl;
		for(int i=0;i<N;i++){
				cout<<m[i]<<endl;
		}
	}
}