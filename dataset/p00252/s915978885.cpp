#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>

using namespace std;

struct Point{
	double x,y;
};

int main(){

	int a,b,c;

	scanf("%d %d %d",&a,&b,&c);

	if(c == 1){
		printf("Open\n");
	}else{
		if(a == 1 && b == 1)printf("Open\n");
		else{
			printf("Close\n");
		}
	}
	return 0;
}