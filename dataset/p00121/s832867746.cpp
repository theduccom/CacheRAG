#include <cstdio>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#include <cstdlib>

using namespace std;

int distances[8][8][8][8][8][8][8][8] = {0};

typedef struct{
    int v[8];
} field_t;

void solve() {
    queue< field_t > q;
    field_t s;
    for (int i =0; i<8; i++) {
        s.v[i] = i;
    } 
    q.push(s);

    while(!q.empty()) {
        field_t a;
        a = q.front(); 
        q.pop();

        for (int i=0; i<8; i++) {
            if (a.v[i] == 0) {
                for (int j=0; j<4; j++) {
                    //case j: 0=up, 1=down, 2=left; 3=right;
                    if (j==2) { // up
                        if (i < 4) {
                            continue;
                        }
                        field_t w = { {0}};
                        for(int k=0; k<8; k++) {
                            w.v[k] = a.v[k];
                        }
                        w.v[i-4] = a.v[i];
                        w.v[i] = a.v[i-4];
                        if(distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] != 0) {
                            continue;
                        }
                        int dist = distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]];
                        distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] = dist + 1;
                        q.push(w);

                    }
                    if (j==3) { // down
                        if (i > 3) { 
                            continue;
                        }
                        field_t w = { {0}};
                        for(int k=0; k<8; k++) {
                            w.v[k] = a.v[k];
                        }
                        w.v[i+4] = a.v[i];
                        w.v[i] = a.v[i+4];
                        if(distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] != 0) {
                            continue;
                        }
                        int dist = distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]];
                        distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] = dist + 1;
                        q.push(w);
                        
                    }
                    if (j==0) { // left
                        if (i==0 || i==4) { 
                            continue;
                        }
                        field_t w = { {0}};
                        for(int k=0; k<8; k++) {
                            w.v[k] = a.v[k];
                        }
                        w.v[i-1] = a.v[i];
                        w.v[i] = a.v[i-1];
                        if(distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] != 0) {
                            continue;
                        }
                        int dist = distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]];
                        distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] = dist + 1;
                        q.push(w);
                        
                    }
                    if (j==1) { // right
                        if (i == 3 || i == 7) { 
                            continue;
                        }
                        field_t w = { {0}};
                        for(int k=0; k<8; k++) {
                            w.v[k] = a.v[k];
                        }
                        w.v[i+1] = a.v[i];
                        w.v[i] = a.v[i+1];
                        if(distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] != 0) {
                            continue;
                        }
                        int dist = distances[a.v[0]][a.v[1]][a.v[2]][a.v[3]][a.v[4]][a.v[5]][a.v[6]][a.v[7]];
                        distances[w.v[0]][w.v[1]][w.v[2]][w.v[3]][w.v[4]][w.v[5]][w.v[6]][w.v[7]] = dist + 1;
                        q.push(w);
                        
                    }
                }
                break;
            }
        }
    }
    distances[0][1][2][3][4][5][6][7] = 0;
}

int main() {
    solve();
    int a[8];
    
    while (true) {
        bool ext = false;
        for (int i=0; i<8; i++) {
           // printf("a");
            if(scanf("%d", &a[i]) == EOF) {
                ext = true;
            }
            //printf("b");
        }
        //printf("%d\n",a[0]);
        if (ext) { break; }
        printf("%d\n", distances[a[0]][a[1]][a[2]][a[3]][a[4]][a[5]][a[6]][a[7]]);
        
    }
    return 0;
}