#include<cstdio>
#include<string>
#include<iostream>
#include<algorithm>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<set>
#include<vector>
#define INF 100000000

#define MAX_N 100

typedef long long int ll;
using namespace std;


int main(){

	for(int i = 1; i <= 9; i++){
		for(int j = 1; j <= 9; j++){
			printf("%dx%d=%d\n", i, j, i*j);
		}
	}

	return 0;

}