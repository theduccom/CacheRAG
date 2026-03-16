#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int masu[14][14] = {0};
	int x, y, s, i, j, n = 0, cut = 0;
	int num[100] = {0};

	while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
		x = x + 2;
		y = y + 2;
		masu[x][y] ++;
		if(s == 1){
			masu[x][y-1] += 1, masu[x][y+1] += 1, masu[x-1][y] += 1, masu[x+1][y] += 1;
		}
		else if(s == 2){
			masu[x][y-1] += 1, masu[x][y+1] += 1, masu[x-1][y] += 1, masu[x+1][y] += 1;
			masu[x+1][y-1] += 1, masu[x+1][y+1] += 1, masu[x-1][y-1] += 1, masu[x-1][y+1] += 1;
		}
		else{
			masu[x][y-1] += 1, masu[x][y+1] += 1, masu[x-1][y] += 1, masu[x+1][y] += 1;
			masu[x+1][y-1] += 1, masu[x+1][y+1] += 1, masu[x-1][y-1] += 1, masu[x-1][y+1] += 1;
			masu[x+2][y] += 1, masu[x-2][y] += 1, masu[x][y+2] +=1, masu[x][y-2] += 1;
		}
		
	}

	for(i = 2; i < 12; i ++){
		for(j = 2; j < 12; j ++){
			num[n] = masu[i][j];
			n ++;
		}
	}

	sort(num, num+100);

	for(i =0; i < 100; i ++){
		if(num[i] == 0) cut ++;
		else break;
	}

	cout << cut << endl << num[99] << endl;

	return 0;    
}