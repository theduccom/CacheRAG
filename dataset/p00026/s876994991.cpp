#include<iostream>
#include<cstdio>
using namespace std;

int paper[10][10] = {0};

void size_s(int x, int y);
void size_m(int x, int y);
void size_l(int x, int y);
void disp();

int main(){
	int inpx, inpy, size;
	while(scanf("%d,%d,%d", &inpx, &inpy, &size) != EOF){
		if(size == 1) size_s(inpx, inpy);
		if(size == 2) size_m(inpx, inpy);
		if(size == 3) size_l(inpx, inpy);
	}
	disp();
	return 0;
}

void size_s(int x, int y){
	int sousax[4] = {0, 1, 0, -1};
	int sousay[4] = {-1, 0, 1, 0};
	paper[y][x]++;
	for(int i = 0; i < 4; i++){
		int pointx = x + sousax[i], pointy = y + sousay[i];
		if(pointx < 0 || pointx > 9 || pointy < 0 || pointy > 9) continue;
		else paper[pointy][pointx]++;
	}
}

void size_m(int x, int y){
	int sousax[8] = {0, 1, 1, 1, 0, -1, -1, -1};
	int sousay[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
	paper[y][x]++;
	for(int i = 0; i < 8; i++){
		int pointx = x + sousax[i], pointy = y + sousay[i];
		if(pointx < 0 || pointx > 9 || pointy < 0 || pointy > 9) continue;
		else paper[pointy][pointx]++;
	}
}

void size_l(int x, int y){
	int sousax[12] = {0, 2, 0, -2, 0, 1, 1, 1, 0, -1, -1, -1};
	int sousay[12] = {-2, 0, 2, 0, -1, -1, 0, 1, 1, 1, 0, -1};
	paper[y][x]++;
	for(int i = 0; i < 12; i++){
		int pointx = x + sousax[i], pointy = y + sousay[i];
		if(pointx < 0 || pointx > 9 || pointy < 0 || pointy > 9) continue;
		else paper[pointy][pointx]++;
	}
}

void disp(){
	int white = 0, deep = -1;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(paper[i][j] > deep) deep = paper[i][j];
			if(paper[i][j] == 0) white++;
		}
	}
	cout <<white <<endl <<deep <<endl;
}