#include <iostream>
#include <string>
using namespace std;




int main()
{
	int area[14][14] = {0};
	int x,nx,ny,y,size;
	int count = 0;
	int max = 0;
	char ch1,ch2;
	while(cin >> x >>ch1>> y >>ch2>> size){
		nx=x+2;
		ny=y+2;
		switch (size){
		case 3:
			area[nx-2][ny]++;
			area[nx+2][ny]++;
			area[nx][ny-2]++;
			area[nx][ny+2]++;
		case 2:
			area[nx-1][ny-1]++;
			area[nx+1][ny-1]++;
			area[nx-1][ny+1]++;
			area[nx+1][ny+1]++;
		case 1:
			area[nx-1][ny]++;
			area[nx+1][ny]++;
			area[nx][ny-1]++;
			area[nx][ny+1]++;
		}
		area[nx][ny]++;
	}

	for (int i=2;i<12;i++){
		for (int j=2;j<12;j++){
			if (area[i][j]==0){
				count++;
			}
			if(max<area[i][j]){
				max=area[i][j];
			}
		}
	}
	
	cout << count <<endl;
	cout << max << endl;


	return 0;
}