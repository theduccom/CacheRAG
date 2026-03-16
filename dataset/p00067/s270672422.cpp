#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void fill(int y, int x, vector<vector<char> > &field){
    if(field[y][x] == '0') return;
    field[y][x] = '0';
    for(int i=0; i<4; i++){
        fill(y+dy[i], x+dx[i], field);
    }
}

int main(){
    vector<vector<char> > field(14, vector<char>(14, '0'));
    while(cin >> field[1][1]){
        for(int i=1; i<=12; i++){
            for(int j=1; j<=12; j++){
                if(!(i==1 && j==1)) cin >> field[i][j];
            }
        }
        int ans = 0;
        for(int i=1; i<=12; i++){
            for(int j=1; j<=12; j++){
                if(field[i][j] == '1'){
                    fill(i, j, field);
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

