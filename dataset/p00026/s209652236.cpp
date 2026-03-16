#include <stdio.h>

#define SIZE 10
int main(void){
    int paper[SIZE+4][SIZE+4];
    int x, y, s;
    int branks, darkest;
    
    for (int i=0; i<SIZE+4; i++){
        for (int j=0; j<SIZE+4; j++){
            paper[i][j]=0;
        }
	}
	
    while (scanf("%d,%d,%d", &x, &y, &s)!= EOF){
        x+=2; y+=2;
        switch (s){
        case 3:
            paper[x  ][y-2]++;
            paper[x-2][y  ]++;
            paper[x  ][y+2]++;
            paper[x+2][y  ]++;
        case 2:
            paper[x-1][y-1]++;
            paper[x-1][y+1]++;
            paper[x+1][y+1]++;
            paper[x+1][y-1]++;
        case 1:
            paper[x  ][y-1]++;
            paper[x-1][y  ]++;
            paper[x  ][y  ]++;
            paper[x+1][y  ]++;
            paper[x  ][y+1]++;
            break;
        }
    }

    branks=0; darkest=0;
    for (int i=2; i<SIZE+2; i++){
        for (int j=2; j<SIZE+2; j++){
            if (paper[i][j]==0) branks++;
            if (paper[i][j]>darkest) darkest=paper[i][j];
        }
	}
    printf("%d\n%d\n", branks, darkest);
    return 0;
}