#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int mod=1000000007;
    int a[10][10];
    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            a[i][j]=0;
        }
    }
    int x,y,s;
    int ans[2]={100,0};
    while (scanf("%d,%d,%d",&x,&y,&s)!=EOF) {
        a[y][x]+=1;
        if (y>0) a[y-1][x]+=1;
        if (x>0) a[y][x-1]+=1;
        if (y<9) a[y+1][x]+=1;
        if (x<9) a[y][x+1]+=1;

        if (s>=2) {
            if (y>0 && x>0) a[y-1][x-1]+=1;
            if (y>0 && x<9) a[y-1][x+1]+=1;
            if (y<9 && x>0) a[y+1][x-1]+=1;
            if (y<9 && x<9) a[y+1][x+1]+=1;
        }

        if (s==3) {
            if (y>1) a[y-2][x]+=1;
            if (x>1) a[y][x-2]+=1;
            if (y<8) a[y+2][x]+=1;
            if (x<8) a[y][x+2]+=1;
        }
    }

    for (int i=0;i<10;i++) {
        for (int j=0;j<10;j++) {
            if (a[i][j]!=0) {
                ans[0]-=1;
                ans[1]=max(ans[1],a[i][j]);
            }
        }
    }
    printf("%d\n%d\n",ans[0],ans[1]);
    return 0;
}