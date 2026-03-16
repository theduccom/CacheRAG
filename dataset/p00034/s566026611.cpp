#include <bits/stdc++.h>
using namespace std;
int station[10];
int v1, v2;

void solve() {
    double v = (v1 + v2);
    int sumDis = 0;
    for(int r = 0; r < 10; r++) {
        sumDis += station[r];
    }
    
    double multi = v1 * (sumDis / v); //速さ * 時間(距離/速さ) = v1で鉢合わせるまで進んだ距離
    //cout << multi << endl;
    int kukan = 0;
    for(int r = 0; r < 10; r++) {
        //cout << multi << endl;
        if(multi <= 0) break;
        multi -= station[r];
        kukan++;
    }
    cout << kukan << endl;
}

int main(void) {
    
    while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &station[0],&station[1],&station[2],&station[3],&station[4],&station[5],&station[6],&station[7],&station[8],&station[9], &v1, &v2) != EOF) {
        solve();
    }
    
    return(0);
}