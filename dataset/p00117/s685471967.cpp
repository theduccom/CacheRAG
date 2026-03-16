#include <cstdio>
#include <iostream>

using namespace std;

const int inf = 1001001001;
int n,m,a,b,c,d,x1,x2,y1,y2;
int K[32][32];

void floyd(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(K[i][j] > K[i][k] + K[k][j])
                    K[i][j] = K[i][k] + K[k][j];
            }
        }
    }
}

void show(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j!=1)
                cout <<" ";
            cout << K[i][j];
        }
        cout << endl;
    }
}

int main(){
    for(int i=0;i<32;i++){
        for(int j=0;j<32;j++){
            K[i][j] = inf;
        }
    }
    scanf("%d%d", &n,&m);
    for(int i=0;i<m;i++){
        scanf("%d,%d,%d,%d", &a, &b, &c, &d);
        // cerr << "read " << a << " " << b << " " << c << " " << d << endl;
        K[a][b] = c;
        K[b][a] = d;
    }
    floyd();
    scanf("%d,%d,%d,%d", &x1,&x2,&y1,&y2);
    // show();
    cout << y1 - y2 - K[x1][x2] - K[x2][x1]<< endl;
}