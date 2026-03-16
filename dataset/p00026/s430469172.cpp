#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int d[14][14]={0},x,y,t,m=0,z=0;
	while(scanf("%d,%d,%d",&x,&y,&t)!=EOF){
		switch(t){
			case 3:d[x][y+2]++;d[x+2][y]++;d[x+2][y+4]++;d[x+4][y+2]++;
			case 2:d[x+1][y+1]++;d[x+1][y+3]++;d[x+3][y+1]++;d[x+3][y+3]++;
			case 1:d[x+1][y+2]++;d[x+2][y+1]++;d[x+2][y+2]++;d[x+2][y+3]++;d[x+3][y+2]++;break;
		}
	}
	for(int i=0;i<100;i++){
		if(d[i/10+2][i%10+2]==0)z++;
		m=max(m,d[i/10+2][i%10+2]);
	}
	cout<<z<<endl<<m<<endl;
}