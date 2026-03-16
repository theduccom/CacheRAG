/*
*	how_many_islands.cpp
*	by otaks , 2010-06-20
*/
#include <iostream>
#include <string>

using namespace std;

const int w=12,h=12;
int dx[] = {-1, 1, 0, 0};
int dy[] = { 0, 0,-1, 1};
string map[20];

void check(int x , int y){
	int mx,my;

	for(int i=0 ; i<4 ; i++){//üÍ4ûüð²×é
		mx = x + dx[i];
		my = y + dy[i];

		//tB[hOÉoÄ¢È¯êÎ²×é(0ÈãE³Èà)
		if(mx>=0 && mx<w && my>=0 && my<h){
			if(map[my][mx]=='1'){//¾Á½ç
				map[my][mx] = '2';//ñdÉ²×È¢½ßÉÊÌlðüêé
				check( mx , my );
			}
		}
	}
}

int main(){
	int count;//ÌðJEg·éÏ
	bool flag = false;

	while(1){
		//ÏÌú»
		count = 0;

		//tB[hª©C©ÌîñðüÍ
		for(int y=0 ; y<h ; y++){
			if(cin >> map[y]);
			else{
				flag = true;
				break;
			}
		}
		if(flag)break;

		for(int y=0 ; y<h ; y++){
			for(int x=0 ; x<w ; x++){
				if(map[y][x]=='1'){//¾Á½çÄAÖðÄÑo·
					map[y][x] = '2';
					count++;
					check( x , y );
				}
			}
		}

		//¦ÌoÍ
		cout << count << endl;
	}

	return 0;
}