#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

void s1(int m[][14], int x, int y){
    x+= 2; y+= 2;
    m[x][y]++;
    m[x+1][y]++;
    m[x-1][y]++;
    m[x][y+1]++;
    m[x][y-1]++;
}
void s2(int m[][14], int x, int y){
    x+= 2; y+= 2;
    m[x][y]++;
    m[x+1][y]++;
    m[x-1][y]++;
    m[x][y+1]++;
    m[x][y-1]++;
    m[x+1][y+1]++;
    m[x+1][y-1]++;
    m[x-1][y+1]++;
    m[x-1][y-1]++;
}
void s3(int m[][14], int x, int y){
    x+= 2; y+= 2;
    m[x][y]++;
    m[x+1][y]++;
    m[x-1][y]++;
    m[x][y+1]++;
    m[x][y-1]++;
    m[x+1][y+1]++;
    m[x+1][y-1]++;
    m[x-1][y+1]++;
    m[x-1][y-1]++;
    m[x+2][y]++;
    m[x-2][y]++;
    m[x][y+2]++;
    m[x][y-2]++;
}

int main(){
    int x,y,s;
    char g;
    int m[14][14] = {{0}};
    int ans[2] = {0};

    while(cin >> x >> g >> y >> g >> s){
        if(s == 1) s1(m,x,y);
        else if(s == 2) s2(m,x,y);
        else if(s == 3) s3(m,x,y);
    }
    range(i,2,12){
        range(j,2,12){
            if(m[i][j] == 0){
                ans[0]++;
            }
            if(ans[1] < m[i][j]){
                ans[1] = m[i][j];
            }
        }
    }
    cout << ans[0] << endl << ans[1] << endl;
}