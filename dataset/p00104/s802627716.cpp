#include<iostream>
#include<string.h>
using namespace std;

struct zahyou{
	int x;
	int y;
};

int main(){
	
	int tx,ty,count;
	char map[100][100];
	bool flag;
	struct zahyou now;
	
	
	
	while(cin>>tx>>ty,tx&&ty){
		
		flag=false;
		now.x=0;
		now.y=0;
		memset(map,'\0',sizeof(map));
		
		for(int i=0;i<tx;i++){
			for(int j=0;j<ty;j++){
				cin>>map[i][j];
			}
		}
		
		while(1){

			if(map[now.y][now.x]=='.'){
				cout<<now.x<<" "<<now.y<<endl;
				break;
			}
			else if(map[now.y][now.x]=='1'){
				cout<<"LOOP"<<endl;
				break;
			}

			if(map[now.y][now.x]=='>'){
				map[now.y][now.x]='1';
				now.x++;
			}
			else if(map[now.y][now.x]=='<'){
				map[now.y][now.x]='1';
				now.x--;
			}
			else if(map[now.y][now.x]=='v'){
				map[now.y][now.x]='1';
				now.y++;
			}
			else if(map[now.y][now.x]=='^'){
				map[now.y][now.x]='1';
				now.y--;
			}
		}
	}
}