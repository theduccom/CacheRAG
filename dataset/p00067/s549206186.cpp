#include <iostream>
std::string map[12];
void dfs(int x,int y){
	if(x-1>=0&&map[y][x-1]=='1')map[y][x-1]='0',dfs(x-1,y);
	if(x+1<=11&&map[y][x+1]=='1')map[y][x+1]='0',dfs(x+1,y);
	if(y-1>=0&&map[y-1][x]=='1')map[y-1][x]='0',dfs(x,y-1);
	if(y+1<=11&&map[y+1][x]=='1')map[y+1][x]='0',dfs(x,y+1);
	return ;
}
int main(){
	while(1){
		for(int i=0;i<12;i++){
			std::cin>>map[i];
		}
		if(std::cin.eof())return 0;
		int r = 0;
		for(int y=0;y<12;y++){
			for(int x=0;x<12;x++){
				if(map[y][x]=='1'){
					r++,map[y][x]='0',dfs(x,y);
				}
			}
		}
		std::cout<<r<<std::endl;
	}
}