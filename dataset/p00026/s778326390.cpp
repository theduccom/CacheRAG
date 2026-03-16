#include <cstdio>
using namespace std;

const int dx[] = {0, 0, 0, 1, -1, 1, 1, -1, -1, -2, 2, 0, 0};
const int dy[] = {0, 1, -1, 0, 0, 1, -1, 1, -1, 0, 0, -2, 2};

int main()
{
	int xy[10][10] = {0};
	int x,y,size;
	
	while(scanf("%d,%d,%d", &x,&y,&size) != EOF){
		if (size < 4){
			for (int d = 0; d < 1 + size * 4; d++){
				int nx, ny;
				nx = x + dx[d];
				ny = y + dy[d];
				if (nx >= 0 && nx < 10 && ny >= 0 && ny < 10){
					xy[nx][ny] += 1;
				}
			}
		}
	}
	int w=0,con = 0;
	
	for(int i=0; i < 10; i++){
		for(int j=0; j < 10; j++){
			if(xy[i][j] == 0)w++;
			if(con < xy[i][j])con = xy[i][j];
		}
	}
	
	printf("%d\n%d\n", w, con);

	return (0);
}