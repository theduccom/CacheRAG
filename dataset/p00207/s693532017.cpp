#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_W 100
#define MAX_H 100

int board[MAX_H + 1][MAX_W + 1];
bool ans = false;

void swapAB(int a[], int b[]);
void resetBoard();
void setBoard(int c, int d, int x, int y);
void loop(int xn, int yn, int xg, int yg, int c);
void disp(int w, int h);

int main(){
    int w, h;
    while(cin >>w >>h){
        if(w == 0 && h == 0) break;
        int xs, ys, xg, yg, n;
        resetBoard();
        ans = false;
        cin >>xs >>ys >>xg >>yg >>n;
        for(int i = 0; i < n; i++){
            int c, d, x, y;
            cin >>c >>d >>x >>y;
            setBoard(c, d, x, y);
        }
//        disp(w, h);
        if(board[ys][xs] == 0){
            cout <<"NG" <<endl;
        } else{
            loop(xs, ys, xg, yg, board[ys][xs]);
            if(ans) cout <<"OK" <<endl;
            else cout <<"NG" <<endl;
        }
    }
    return 0;
}   

void swapAB(int a[], int b[]){
    for(int i = 0; i < 8; i++){
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

void resetBoard(){
    for(int i = 0; i <= MAX_H; i++){
        for(int j = 0; j <= MAX_W; j++){
            board[i][j] = 0;
        }
    }
}

void setBoard(int c, int d, int x, int y){
    int xm[] = {0, 1, 2, 3, 0, 1, 2, 3}, ym[] = {0, 0, 0, 0, 1, 1, 1, 1};
    if(d == 1) swapAB(xm, ym);
    for(int i = 0; i < 8; i++){
        int tmpx = x + xm[i], tmpy = y + ym[i];
        if(tmpx > 0 || tmpy > 0 || tmpx <= MAX_W || tmpy <= MAX_H){
            board[tmpy][tmpx] = c;
        }
    }
}
void loop(int xn, int yn, int xg, int yg, int c){
    if(xn == xg && yn == yg){
        ans = true;
    } else{
        board[yn][xn] = 0;
        int xm[] = {0, 1, 0, -1}, ym[] = {-1, 0, 1, 0};
        for(int i = 0; i < 4; i++){
            int tmpx = xn + xm[i], tmpy = yn + ym[i];
            //            cout <<"tmpx = " <<tmpx <<", tmpy = " <<tmpy <<endl;
            if(tmpx > 0 && tmpy > 0 && tmpx <= MAX_W && tmpy <= MAX_H && board[tmpy][tmpx] == c){
                loop(tmpx, tmpy, xg, yg, c);
            }
        }
    }
}

void disp(int w, int h){
    for(int i = 0; i <= h; i++){
        for(int j = 0; j <= w; j++){
            cout <<board[i][j];
        }
        cout <<endl;
    }
}

//0, 01:15:08