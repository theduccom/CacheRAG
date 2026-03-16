#include <stdio.h>
int main() {
    char RB[8][9],i,j;while (scanf("%s",&RB[0])!=EOF) {for (i=1;i<8;scanf("%s",&RB[i++]));
        for (i=0;i<8;i++) for (j=0;j<8;j++) if (RB[i][j]=='1') {if (j<=4 && RB[i][j+1]=='1' && RB[i][j+2]=='1' && RB[i][j+3]=='1') puts("C"); else if (i<=4 && RB[i+1][j]=='1' && RB[i+2][j]=='1' && RB[i+3][j]=='1') puts("B"); else if (i<7 && j<7 && RB[i+1][j]=='1' && RB[i][j+1]=='1' && RB[i+1][j+1]=='1') puts("A");
        else if (i<6 && RB[i+2][j-1]=='1') puts("D"); else if (RB[i+1][j-1]=='1') puts("G"); else if (j<6 && RB[i+1][j+2]=='1') puts("E"); else puts("F"); i=10,j=10;}}return 0;}