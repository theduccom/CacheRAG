#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int x,y,size,glid[10][10];
	int max = 0,count = 0;
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			glid[i][j]=0;
		}
	}

	while(scanf("%d,%d,%d",&x,&y,&size) != EOF){
		glid[x][y]++;
		if(size == 1){
			if(x-1 >= 0 && x-1 < 10) glid[x-1][y]++;
			if(x+1 >= 0 && x+1 < 10) glid[x+1][y]++;
			if(y-1 >= 0 && y-1 < 10) glid[x][y-1]++;
			if(y+1 >= 0 && y+1 < 10) glid[x][y+1]++;
		}
		if(size == 2){
			if(x-1 >= 0 && x-1 < 10) glid[x-1][y]++;
			if(x+1 >= 0 && x+1 < 10) glid[x+1][y]++;
			if(y-1 >= 0 && y-1 < 10) glid[x][y-1]++;
			if(y+1 >= 0 && y+1 < 10) glid[x][y+1]++;
			if(x-1 >= 0 && y+1 >= 0 && x-1 < 10 && y+1 < 10) glid[x-1][y+1]++;
			if(x+1 >= 0 && y+1 >= 0 && x+1 < 10 && y+1 < 10) glid[x+1][y+1]++;
			if(x-1 >= 0 && y-1 >= 0 && x-1 < 10 && y-1 < 10) glid[x-1][y-1]++;
			if(x+1 >= 0 && y-1 >= 0 && x+1 < 10 && y-1 < 10) glid[x+1][y-1]++;
		}
		if(size == 3){
			if(x-1 >= 0 && x-1 < 10) glid[x-1][y]++;
			if(x+1 >= 0 && x+1 < 10) glid[x+1][y]++;
			if(y-1 >= 0 && y-1 < 10) glid[x][y-1]++;
			if(y+1 >= 0 && y+1 < 10) glid[x][y+1]++;
			if(x-1 >= 0 && y+1 >= 0 && x-1 < 10 && y+1 < 10) glid[x-1][y+1]++;
			if(x+1 >= 0 && y+1 >= 0 && x+1 < 10 && y+1 < 10) glid[x+1][y+1]++;
			if(x-1 >= 0 && y-1 >= 0 && x-1 < 10 && y-1 < 10) glid[x-1][y-1]++;
			if(x+1 >= 0 && y-1 >= 0 && x+1 < 10 && y-1 < 10) glid[x+1][y-1]++;
			if(x-2 >= 0 && x-2 < 10) glid[x-2][y]++;
			if(x+2 >= 0 && x+2 < 10) glid[x+2][y]++;
			if(y-2 >= 0 && y-2 < 10) glid[x][y-2]++;
			if(y+2 >= 0 && y+2 < 10) glid[x][y+2]++;
		}
	}
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(max < glid[i][j])
				max = glid[i][j];
			if(glid[i][j] == 0)
				count++;
		}
	}
			cout << count << endl << max << endl;

}