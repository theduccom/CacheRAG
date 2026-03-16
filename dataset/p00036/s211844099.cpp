#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)
#define FOR(i, j, k) for(int i = j; i < k; i++)
const int N = 8;

bool check(vector< vector<bool> > &v, int y, int x){
    if(y < 0 || x < 0 || y >= N || x >= N || !v[y][x]) return false;
    return true;
}

char isSame(vector< vector<bool> > &v, int y, int x){
    if(check(v, y, x) && check(v, y + 1, x) && check(v, y, x + 1) && check(v, y + 1, x + 1)) return 'A';
    if(check(v, y, x) && check(v, y + 1, x) && check(v, y + 2, x) && check(v, y + 3, x)) return 'B';
    if(check(v, y, x) && check(v, y + 1, x) && check(v, y + 2, x) && check(v, y + 3, x)) return 'B';
    if(check(v, y, x) && check(v, y, x + 1) && check(v, y, x + 2) && check(v, y, x + 3)) return 'C';
    if(check(v, y, x) && check(v, y + 1, x) && check(v, y + 1, x - 1) && check(v, y + 2, x - 1)) return 'D';
    if(check(v, y, x) && check(v, y, x + 1) && check(v, y + 1, x + 1) && check(v, y + 1, x + 2)) return 'E';
    if(check(v, y, x) && check(v, y + 1, x) && check(v, y + 1, x + 1) && check(v, y + 2, x + 1)) return 'F';
    if(check(v, y, x) && check(v, y, x + 1) && check(v, y + 1, x - 1) && check(v, y + 1, x)) return 'G';
    return 'n';
}

char allCheck(vector< vector<bool> > &v){
    REP(i, N) REP(j, N) if(v[i][j]) return isSame(v, i, j);
}

int main(){
    vector< vector<char> > tmp(N, vector<char>(N));
    while(cin >>tmp[0][0]){
        REP(i, N){
            REP(j, N){
                if(i == 0 && j == 0) continue;
                cin >>tmp[i][j];
            }
        }
        vector< vector<bool> > v(N, vector<bool>(N));
        REP(i, N) REP(j, N) v[i][j] = (tmp[i][j] == '1'? true : false);
        cout <<allCheck(v) <<endl;
    }
    return 0;
}