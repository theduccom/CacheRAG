#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int field[10][10];
int x,y,size;


int main(void)
{
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            field[i][j] = 0;
        }
    }

    char tmp;
    while(cin>>x>>tmp>>y>>tmp>>size) {
        if(size==1) {
            for(int dx=-1; dx<=1; dx++) {
                int nx = x + dx;
                if(0 <= nx && nx < 10)
                    field[y][nx]++;
            }
            for(int dy=-1; dy<=1; dy++) {
                int ny = y + dy;
                if(0 <= ny && ny < 10)
                    field[ny][x]++;
            }
            field[y][x]--;
        } else if(size == 2) {
            for(int dy=-1; dy<=1; dy++) {
                for(int dx=-1; dx<=1; dx++) {
                    int nx = x + dx, ny = y+dy;
                    if(0 <= nx && nx < 10)
                        if(0 <= ny && ny < 10)
                            field[ny][nx]++;
                }
            }
        } else if(size == 3) {
            for(int dy=-1; dy<=1; dy++) {
                for(int dx=-1; dx<=1; dx++) {
                    int nx = x + dx, ny = y+dy;
                    if(0 <= nx && nx < 10)
                        if(0 <= ny && ny < 10)
                            field[ny][nx]++;
                }
            }
            //field[y][x]--;
            for(int dx=-2; dx<=2; dx+=2) {
                int nx = x + dx;
                if(0 <= nx && nx < 10)
                    field[y][nx]++;
            }
            for(int dy=-2; dy<=2; dy+=2) {
                int ny = y + dy;
                if(0 <= ny && ny < 10)
                    field[ny][x]++;
            }
            field[y][x]--;

        }
    }

    int cnt=0, max=0;
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if(field[i][j] == 0) cnt++;
            if(max < field[i][j]) max = field[i][j];
        }
    }

    printf("%d\n%d\n", cnt, max);

    return 0;
}