

#include<stdio.h>
#include<map>
#include<queue>
using namespace std;

int a[8] = {0};
int direction[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
map<int,int> exitmap;

struct array{
	int map[2][4];
	int step;
};

bool isInMap(int x,int y){
	if(x<0 || x>=2)return 0;
	if(y<0 || y>=4)return 0;
	else return 1;
}

void bfs(){
	array begin = {{0,1,2,3,4,5,6,7},0};
	queue<array> que;
	que.push(begin);
	exitmap.insert(make_pair(1234567,0));
	while(!que.empty()){
		int x,y;
		array temp = que.front();
		que.pop();
		for(int i = 0; i < 2; i++)
			for(int j = 0; j < 4; j++)
				if(temp.map[i][j] == 0)
				{x = i;y = j;}
		for(int k = 0; k < 4; k++)
		{
			if(isInMap(x+direction[k][0],y+direction[k][1])){
				array newarray = temp;
				int r = newarray.map[x][y];
				newarray.map[x][y] = newarray.map[x+direction[k][0]][y+direction[k][1]];
				newarray.map[x+direction[k][0]][y+direction[k][1]] = r;
				newarray.step = temp.step + 1;
				int num = 0;
				for(int i = 0; i < 2; i++)
					for(int j = 0; j < 4; j++)
						num = num * 10 + newarray.map[i][j];
				if(exitmap.find(num) == exitmap.end())
				{
					que.push(newarray);
					exitmap.insert(make_pair(num,newarray.step));
				}

			}
		}

	}

}

int main(){
	bfs();
	int temp;
	 while (~scanf("%d",&temp))  
    {  
		int num = temp;
		for(int i = 1; i < 8; i++)
		{
			scanf("%d",&temp);
			num = num * 10 + temp;
		}
		printf("%d\n",exitmap[num]);
       
    }  
	return 0;		
}