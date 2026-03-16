#include<iostream>
#include<string>
using namespace std;
#define N 12

int map[N][N], ans = 0;

int toInt(string str, int n);
int search();
int loop(int x, int y);

int main(){
    string str;
    while(cin >>str){
        toInt(str, 0);
        for(int i = 1; i < N; i++){
            ans = 0;
            cin >>str;
            toInt(str, i);
        }
        search();
        cout <<ans <<endl;
    }
}

int toInt(string str, int n){
    for(int i = 0; i < N; i++){
        map[n][i] = str[i] - '0';
    }
}

int search(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(map[i][j] == 1){
                ans++;
                loop(j, i);
            }
        }
    }
}

int loop(int x, int y){
    int xm[] = {0, 1, 0, -1}, ym[] = {-1, 0, 1, 0};
    if(map[y][x] == 1){
        map[y][x] = 0;
        for(int i = 0; i < 4; i++){
            int xn = x + xm[i], yn = y + ym[i];
            if(xn >= 0 && yn >= 0 && xn < N && yn < N && map[yn][xn] == 1) loop(xn, yn);
        }
    }
}