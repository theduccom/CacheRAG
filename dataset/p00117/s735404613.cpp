#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
    signed int n, m, a, b, c, d;
    char temp[3];
    cin >> n >> m;
    vector<vector<int>> map(n, vector<int>(n, 2000000));
    for(int i = 0;i<m;i++){
        cin >> a >> temp[0] >> b >> temp[1] >> c >> temp[2] >> d;
        map[a-1][b-1] = c;
        map[b-1][a-1] = d;
    }
    cin >> a >> temp[0] >> b >> temp[1] >> c >> temp[2] >> d;
    for(int h = 0;h<n;h++){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            map[j][j] = 0;
            for(int k = 0;k<n;k++){
                map[j][i] = min(map[j][i],map[j][k] + map[k][i]);
            }
        }
    }
    }
    cout << c - (map[a-1][b-1] + map[b-1][a-1] + d) << endl;
    return 0;
}