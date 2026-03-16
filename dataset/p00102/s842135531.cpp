#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    while( cin >> n, n ){
        long long sheet[n+1][n+1];
        int i, j;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cin >> sheet[i][j];
            }
        }
        int ss = 0;
        for(i = 0; i < n; i++){
            int s = 0;
            for(j = 0; j < n; j++){
                s += sheet[i][j];
            }
            sheet[i][n] = s;
            ss += s;
        }
        sheet[n][n] = ss;
        for(i = 0; i < n; i++){
            int s = 0;
            for(j = 0; j < n; j++){
                s += sheet[j][i];
            }
            sheet[n][i] = s;
        }
        for(i = 0; i <= n; i++){
            printf("%5lld", sheet[i][0]);
            for(j = 1; j <= n; j++){
                printf("%5lld", sheet[i][j]);
            }
            cout << endl;
        }
    }
    return 0;
}