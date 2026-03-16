#include<iostream>
#include<string>
#include<queue>
#include<map>
#define SIZE_MAP 8
#define N 12
using namespace std;

int main(){
    int n;
    cin >>n;
    for(int i = 0; i < n; i++){
        int dx[SIZE_MAP][SIZE_MAP], x, y;
        for(int j = 0; j < SIZE_MAP; j++){
            string input;
            cin >>input;
            for(int k = 0; k < SIZE_MAP; k++){
                if(input[k] == '1') dx[j][k] = 1;
                else dx[j][k] = 0;
            }
        }
        cin >>x >>y;
        queue< pair<int, int> > zahyou;
        zahyou.push( make_pair(x - 1, y - 1) );
        dx[y - 1][x - 1] = 0;
        while(!zahyou.empty()){
            int sousay[N] = {-1, -2, -3, 0, 0, 0, 1, 2, 3, 0, 0, 0};
            int sousax[N] = {0, 0, 0, 1, 2, 3, 0, 0, 0, -1, -2, -3};
            for(int j = 0; j < N; j++){
                int nowx = zahyou.front().first + sousax[j];
                int nowy = zahyou.front().second + sousay[j];
                if(nowx >= 0 && nowx < SIZE_MAP && nowy >= 0 && nowy < SIZE_MAP){
                    if(dx[nowy][nowx] == 1){
                        zahyou.push( make_pair(nowx, nowy) );
                        dx[nowy][nowx] = 0;
                    }
                }
            }
            zahyou.pop();
        }
        cout <<"Data " <<i + 1 <<":" <<endl;
        for(int j = 0; j < SIZE_MAP; j++){
            for(int k = 0; k < SIZE_MAP; k++){
                cout <<dx[j][k];
            }
            cout <<endl;
        }
    }
    return 0;
}