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
    int a[3],ans_cho=0,ans_hishi=0;
    
    while(EOF!=scanf("%d,%d,%d",&a[0],&a[1],&a[2])){
        
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])
            ans_cho++;
        
        if(a[0]==a[1])
            ans_hishi++;
        
        
    }
    
    printf("%d\n%d\n",ans_cho,ans_hishi);
    
    return 0;
}