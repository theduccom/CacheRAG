#define scanf_s scanf
//#define sscanf_s sscanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 101
#define HO 6
int main(void)
{
	int H, W;
	while (scanf_s("%d %d", &H,&W) != EOF) {
		if (H == 0 && W == 0) break;
		char tile[MAX][MAX];
		int  h = 0, w = 0;
		bool tile_b[MAX][MAX] = { 0 };
		for (int i = 0; i < H; ++i) {
			scanf_s("%s", tile[i], MAX);
		}
		h = 0; w = 0;
		while (1) {
			if (tile[h][w] == '.') { 
				printf("%d %d\n",w,h); break; 
			}
			if (tile_b[h][w] == true) {
				printf("LOOP\n"); break;
			}
			tile_b[h][w] = true;
			switch (tile[h][w]) {
			case '>': ++w; break;
			case '<': --w; break;
			case 'v': ++h; break;
			case '^': --h; break;
			}
		}
		
	}
}