#include <iostream>
#include <string>

using namespace std;

bool field[12][12];

void dfs(int x,int y){
	field[x][y]=false;
	if(x!=11&&field[x+1][y]) dfs(x+1,y);
	if(x!=0&&field[x-1][y]) dfs(x-1,y);
	if(y!=11&&field[x][y+1]) dfs(x,y+1);
	if(y!=0&&field[x][y-1]) dfs(x,y-1);
}

int main(void){
	string str;
	int count;
	while(1){
		count=0;
		for(int i=0;i<12;++i){
			cin>>str;
			for(int j=0;j<12;++j){
				field[j][i]=(str[j]-'0'==1)?true:false;
			}
		}
		if(cin.eof()) break;
		
		for(int i=0;i<12;++i){
			for(int j=0;j<12;++j){
				if(field[j][i]){
					dfs(j,i);
					++count;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}