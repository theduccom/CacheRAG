#include <iostream>
using namespace std;

string field[15];

void dfs(int x, int y){
    if(x>=0 && x<12 && y>=0 && y<12){
    if(field[x][y]=='1'){
        field[x][y]='2';
        dfs(x+1, y);
        dfs(x-1, y);
        dfs(x, y+1);
        dfs(x, y-1);
    }
    }
}


int main(void){
    while(cin >> field[0]){
        for(int i=1; i<12; i++){
            cin >> field[i];
        }
        int sum = 0;
        for(int i=0; i<12; i++){
            for(int j=0; j<12; j++){
                if(field[i][j]=='1'){
                dfs(i, j);
                sum++;
                }
            }
        }
        cout << sum << endl;
    }
    
    
    return 0;
}
