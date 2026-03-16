#include <iostream>
#include <cstdio>
#include <cmath>
#define R (3.1415926535898/180.0)
using namespace std;

int main(){
	int go,turn;
	double x=0,y=0,cur=0;
	
	while(scanf("%d,%d\n",&go,&turn) , (go || turn) ){
		y += cos(cur * R) * go;
		x += sin(cur * R) * go;
		cur += turn;
	}
	cout << (int)x << endl << (int)y << endl;
}