#define _CRT_SECURE_NO_WARNINGS
 
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <queue>
#include <cmath>
#include <stack>
#include <map>
 
#define int64 long long int 
 
using namespace std;
typedef pair<int, int> P;
 
void ink(P, int, int map[10][10]);
 
int main()
{
    int map[10][10] = {0};
    int x, y, s, count, max;
    while(scanf("%d,%d,%d", &x, &y, &s) != EOF){
        P p(x, y);
        ink(p, s, map);
    }
    count = max = 0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(!map[i][j]) count++;
            if(max < map[i][j]) max = map[i][j];
        }
    }
    cout << count << '\n' << max << '\n';
    return 0;
}
 
void ink(P p, int s, int map[10][10])
{
    int dx1[4] = {1, 0, -1, 0};
    int dy1[4] = {0, 1, 0, -1};
    int dx2[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy2[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dx3[12] = {1, 1, 0, -1, -1, -1, 0, 1, 2, 0, -2, 0};
    int dy3[12] = {0, 1, 1, 1, 0, -1, -1, -1, 0, 2, 0, -2};
    int nx, ny;
 
    if(s == 1){
        map[p.first][p.second]++;
        for(int i=0; i<4; i++){
            nx = p.first + dx1[i], ny = p.second + dy1[i];
            if(0 <= nx && nx < 10 && 0 <= ny && ny < 10)
                map[nx][ny]++;
        }
    }
    if(s == 2){
        map[p.first][p.second]++;
        for(int i=0; i<8; i++){
            nx = p.first + dx2[i], ny = p.second + dy2[i];
            if(0 <= nx && nx < 10 && 0 <= ny && ny < 10)
                map[nx][ny]++;
        }
    }
    if(s == 3){
        map[p.first][p.second]++;
        for(int i=0; i<12; i++){
            nx = p.first + dx3[i], ny = p.second + dy3[i];
            if(0 <= nx && nx < 10 && 0 <= ny && ny < 10)
                map[nx][ny]++;
        }
    }
    return;
}