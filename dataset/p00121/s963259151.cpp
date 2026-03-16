#include <bits/stdc++.h>
using namespace std;

int hash(int data[2][4])
{
    int g = 1, ret = 0;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            ret += g * data[i][j];
            g *= 8;
        }
    }
    return (ret);
}
void back(int val, int data[2][4])
{
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            data[i][j] = val % 8;
            val /= 8;
        }
    }
}

short mc[(1 << 24) + 2];         

int main()
{
    int sdata[2][4];
    int gdata[2][4] = { {0, 1, 2, 3}, {4, 5, 6, 7} };
    int my[] = {1, 0, -1, 0};
    int mx[] = {0, 1, 0, -1};
    int gval = hash(gdata);
    queue < int > que;
    memset(mc, -1, sizeof(mc));

    mc[gval] = 0; que.push(gval);
    back(gval, sdata);
    while(!que.empty()) {
        int val = que.front(); que.pop();
        int data[2][4];
        back(val, data);
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 4; j++) {
                if(data[i][j] == 0) {
                    for(int k = 0; k < 4; k++) {
                        int ny = i + my[k], nx = j + mx[k];
                        if(ny < 0 || nx < 0 || nx >= 4 || ny >= 2) continue;
                        swap(data[i][j], data[ny][nx]);
                        int nval = hash(data);
                        swap(data[i][j], data[ny][nx]);
                        if(mc[nval] == -1) {
                            mc[nval] = mc[val] + 1;
                            que.push(nval);
                        }
                    } 
                }
            }
        }
    }
    
    while(cin >> sdata[0][0] >> sdata[0][1] >> sdata[0][2] >> sdata[0][3] >> sdata[1][0] >> sdata[1][1] >> sdata[1][2] >> sdata[1][3]) { 
        cout << mc[hash(sdata)] << endl;
    }

    return (0);
}
        



     