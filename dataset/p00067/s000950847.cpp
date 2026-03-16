#include <iostream>
std::string m[12];
void d(int x,int y){
	if(x>0&&m[y][x-1]-'0')m[y][x-1]='0',d(x-1,y);
	if(x<11&&m[y][x+1]-'0')m[y][x+1]='0',d(x+1,y);
	if(y>0&&m[y-1][x]-'0')m[y-1][x]='0',d(x,y-1);
	if(y<11&&m[y+1][x]-'0')m[y+1][x]='0',d(x,y+1);
	return ;
}
int main(){
	while(1){
		int y=12;
		for(;y;y--)
			std::cin>>m[y-1];
		if(std::cin.eof())return 0;
		int r = 0;
		for(y=0;y<12;y++){
			for(int x=0;x<12;x++)
				if(m[y][x]-'0')r++,m[y][x]='0',d(x,y);
		}
		std::cout<<r<<'\n';
	}
}