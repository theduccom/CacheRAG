#include <iostream>
#include <vector>
using namespace std;

vector<string> v(12);
bool used[12][12];
void dfs(int i, int j) {
    if(i < 0 || i > 11 || j < 0 || j > 11) return;
    if(!used[i][j] && v[i][j] == '1') {
        used[i][j] = true;
        dfs(i+1, j); dfs(i, j+1); dfs(i-1, j); dfs(i, j-1);
    }
    return;
}

int main() {
    while(cin >> v[0]) {
        for(int i=0;i<12;i++)
            for(int j=0;j<12;j++)
                used[i][j] = false;

        for(int i = 1;i<12;i++) {
            cin >> v[i];
        }
        int cnt = 0;
        for(int i = 0;i < 12; i++) {
            for(int j = 0; j < 12; j++) {
                if(!used[i][j] && v[i][j] == '1') {
                    cnt++;
                    dfs(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
}