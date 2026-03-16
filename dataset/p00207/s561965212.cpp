#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    while (true) {
        int w, h;
        cin >> w >> h;
    
        if (w==0 && h==0) {
            break;
        }
    
        int xs, ys;
        cin >> xs >> ys;
        xs -= 1;
        ys -= 1;
        
        int xg, yg;
        cin >> xg >> yg;
        xg -= 1;
        yg -= 1;
    
        int S[h][w];
    
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                S[i][j] = -1;
            }
        }
    
        int n;
        cin >> n;
        
        for (int i=0; i<n; i++) {
            int ci, di, xi, yi;
            cin >> ci >> di >> xi >> yi;
            xi -= 1;
            yi -= 1;
            
            if (di==0) {
                for (int i=yi; i<yi+2; i++) {
                    for (int j=xi; j<xi+4; j++) {
                        S[i][j] = ci;
                    }
                }
            }
            else {
                for (int i=yi; i<yi+4; i++) {
                    for (int j=xi; j<xi+2; j++) {
                        S[i][j] = ci;
                    }
                }
            }
        }
        
        if (S[ys][xs]==-1) {
            cout << "NG" << endl;
            continue;
        }
        
        int visited[h][w];
        
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                visited[i][j] = 0;
            }
        }
        
        queue<P> q;
        q.push(P(ys, xs));
        visited[ys][xs] = 1;
        
        while (q.size()) {
            P p = q.front();
            q.pop();
            int cy = p.first;
            int cx = p.second;
            
            for (int i=0; i<4; i++) {
                int ny = cy+dy[i];
                int nx = cx+dx[i];
                
                if (!(0<=ny && ny<h && 0<=nx && nx<w)) {
                    continue;
                }
                
                if (visited[ny][nx]==0 && S[ny][nx]==S[cy][cx]) {
                    q.push(P(ny, nx));
                    visited[ny][nx] = 1;
                }
            }
        }
        
        if (visited[yg][xg]==1) {
            cout << "OK" << endl;
        }
        else {
            cout << "NG" << endl;
        }
    }
}
