#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

void bomb(int *field, int bx, int by){
	if(bx>=1 && by>=1 && bx<=8 && by<=8)
	if(field[8*(by-1)+bx-1] == 1){
		field[8*(by-1)+bx-1] = 0;
		for(int i=-3;i<=3;++i){
			bomb(field,bx+i,by);
			bomb(field,bx,by+i);
		}
		
	}
}

int main() {
	int n,sx,sy,field[64];
	
	cin>>n;
	for(int i=0;i<n;++i){
		getchar();
		getchar();
		char c;
		
		for(int y=0;y<8;++y){
			for(int x=0;x<8;++x){
				c=getchar();
				field[8*y+x] = (c=='0'?0:1);
			}
			getchar();
		}
		cin>>sx>>sy;
		
		bomb(field,sx,sy);
		
		cout<<"Data "<<i+1<<":"<<endl;
		for(int y=0;y<8;++y){
			for(int x=0;x<8;++x){
				cout<<field[8*y+x];
			}
			cout<<endl;
		}
	}
	return 0;
}