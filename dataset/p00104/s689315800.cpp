#include <iostream>
#include <string>
#include <cstdio>
#define MAX_N 105

using namespace std;
int n,h,w;
int area[MAX_N][MAX_N];
string s[MAX_N];

void move(int h,int w){
	if(area[h][w]==1){
		cout << "LOOP" << endl;
		return;
	}
	area[h][w]=1;
	
	switch(s[h][w]){

		case'>':
		move(h,w+1);
		return;
		break;

		case'<':
		move(h,w-1);
		return;
		break;

		case'v':
		move(h+1,w);
		return;
		break;

		case'^':
		move(h-1,w);
		return;
		break;

		case'.':
		cout << w<< " "<<h<<endl;
		return;
		break;
	}
	return;
}

int main(){
	while(1){
		cin >> h >> w;
		if(h==0&&w==0)break;

		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				area[i][j]=0;
			}
		}

		for(int i=0;i<h;i++){
			cin >> s[i];
		}
		move(0,0);

	}
	return 0;
}