#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void){
  int h, w;

  while(cin >> h >> w){
	if((h|w) == 0) break;
	bool visited[h][w];
	bool isloop = false;
	char arrow[h][w];
	string str;
	for(int i=0;i<h;i++){
	  cin >> str;
	  for(int j=0;j<w;j++){
		arrow[i][j] = str[j];
	  }
	}
	
	int x=0,y=0;
	memset(visited, false, sizeof(visited));
	while(arrow[x][y] != '.'){
	  if(visited[x][y]){
		isloop = true;
		break;
	  }
	  visited[x][y] = true;
	  if(arrow[x][y] == '>'){
		y++;
	  }else if(arrow[x][y] == '^'){
		x--;
	  }else if(arrow[x][y] == 'v'){
		x++;
	  }else{
		y--;
	  }
	}
	if(isloop){
	  cout << "LOOP" << endl;
	}else{
	  cout << y << " " << x << endl;
	}
  }
}