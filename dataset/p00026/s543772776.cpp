
#define _USE_MATH_DEFINES
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#include <complex>
#include <stack>
#include <climits>

using namespace std;

double sq(double x){return x*x;}

int t[10][10];

int main(){
	int x,y,s;
	while(~scanf("%d,%d,%d",&x,&y,&s)){
		if(s == 1){
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if(abs(i-x) + abs(j-y) <= 1) t[i][j]++;
				}
			}
		} else if(s == 2){
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if(abs(i-x) <=1 && abs(j-y) <= 1) t[i][j]++;
				}
			}
		} else if(s == 3){
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if(abs(i-x) + abs(j-y) <= 2) t[i][j]++;
				}
			}
		}
	}

	int no = 0, big = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if(t[i][j] == 0) no++;
			big = max(big,t[i][j]);
		}
	}

	printf("%d\n%d\n",no,big);

	return 0;
}