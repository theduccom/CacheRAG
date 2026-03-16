#include<iostream>
#include<queue>
#define dr direction
#define cl color
#define fi first
#define se second

using namespace std;
typedef pair<int, int> pii;

class Block{
public:
    int color;// 1~5
    int direction;// 0:-, 1:|
    int x, y;
    void init(int c, int d, int xx, int yy);
};

void Block::init(int c, int d, int xx, int yy){
    color=c;
    direction=d;
    x=xx;
    y=yy;
}

int w, h, xs, ys, xg, yg, n;
int fld[100][100], dis[100][100];
const pii dxdy[]={{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
const int inf=1e8;

string solve(){// bfs
    queue<pii> qu;
    qu.push(make_pair(ys, xs));
    int C=fld[ys][xs];
    fill(dis[0], dis[100], inf);
    dis[ys][xs]=0;

    if(C==0) return "NG";
    while(!qu.empty()){
        pii now=qu.front(); qu.pop();
        if(now.fi==yg&&now.se==xg){
            return "OK";
        }

        for(int k=0; k<4; k++){
            pii nx=make_pair(now.fi+dxdy[k].fi, now.se+dxdy[k].se);
            if(!(0<=nx.fi&&nx.fi<h&&0<=nx.se&&nx.se<w)) continue;
            if(fld[nx.fi][nx.se]!=C) continue;
            if(dis[nx.fi][nx.se]!=inf) continue;

            dis[nx.fi][nx.se]=dis[now.fi][now.se]+1;
            qu.push(nx);
        }
    }

    return "NG";
}

int main(){

    while(1){
        cin>> w>> h;
        if(w==0&&h==0) break;
        cin>> xs>> ys>> xg>> yg>> n;
        xs--; ys--; xg--; yg--;
        Block block[n];
        for(int i=0; i<n; i++){
            int c, d, xx, yy;
            cin>> c>> d>> xx>> yy;
            xx--; yy--;
            block[i].init(c, d, xx, yy);
        }

        // make field
        fill(fld[0], fld[100], 0);
        for(int k=0; k<n; k++){
            int X=block[k].x, Y=block[k].y;
            if(block[k].dr==0){
                for(int i=0; i<2; i++){
                    for(int j=0; j<4; j++){
                        fld[Y+i][X+j]=block[k].cl;
                    }
                }
            }else{
                for(int i=0; i<4; i++){
                    for(int j=0; j<2; j++){
                        fld[Y+i][X+j]=block[k].cl;
                    }
                }
            }
        }
/*
        for(int i=0; i<w; i++){
            for(int j=0; j<h; j++){
                cout<< fld[i][j]<<" ";
            }
            cout<< endl;
        }
//*/
        cout<< solve()<< endl;
    }

    return 0;
}