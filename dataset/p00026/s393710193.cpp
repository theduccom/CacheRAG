#include<iostream>
#include<stdio.h>
using namespace std;

void small(int paper[][14], int x, int y){
    paper[x][y]++;
    paper[x-1][y]++;
    paper[x+1][y]++;
    paper[x][y-1]++;
    paper[x][y+1]++;
}

void middle(int paper[][14], int x, int y){
    small(paper, x, y);
    paper[x-1][y-1]++;
    paper[x-1][y+1]++;
    paper[x+1][y-1]++;
    paper[x+1][y+1]++;
}

void large(int paper[][14], int x, int y){
    small(paper, x, y);
    paper[x-1][y-1]++;
    paper[x-1][y+1]++;
    paper[x+1][y-1]++;
    paper[x+1][y+1]++;
    paper[x-2][y]++;
    paper[x+2][y]++;
    paper[x][y-2]++;
    paper[x][y+2]++;
}

int main(){
    int paper[14][14]={};
    int x, y, Size;
    while(scanf("%d,%d,%d", &x, &y, &Size) != EOF){
        x += 2;
        y += 2;
        switch(Size){
            case 1 : small(paper, x, y); break;
            case 2 : middle(paper, x, y); break;
            case 3 : large(paper, x, y); break;
        }
    }
    int mx=0, plain=0;
    for(int i=2; i<12; i++){
        for(int j=2; j<12; j++){
            if(paper[i][j] > mx) mx = paper[i][j];
            if(paper[i][j] == 0) plain++;
        }
    }
    cout << plain << endl << mx << endl;
    return 0;
}