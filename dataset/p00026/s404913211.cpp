#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;

int paper[10][10]={0};

void drop(int x,int y){
    
    if(0<=x && x<10 && 0<=y && y<10){
        paper[x][y]++;
    }
    
}

int main(){
    int x,y,s,ans_zero=0,ans_max=0;
    
    while(EOF!=scanf("%d,%d,%d",&x,&y,&s)){
        
        switch (s) {
            case 1: //small
                drop(x-1,y);
                drop(x,y-1);
                drop(x+1,y);
                drop(x,y+1);
                drop(x,y);
                break;
                
            case 3:
                drop(x+2,y);
                drop(x,y+2);
                drop(x-2,y);
                drop(x,y-2);
                
            case 2: //medium
                for(int i=x-1;i<=x+1;i++){
                    for(int j=y-1;j<=y+1;j++){
                        drop(i,j);
                    }
                }
                break;
        }
    }
    
    
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(paper[i][j]==0)
                ans_zero++;
            ans_max=max(ans_max,paper[i][j]);
        }
    }
    
    printf("%d\n%d\n",ans_zero,ans_max);
    
    return 0;
}