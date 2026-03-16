#include<cstdio>
#include<queue>
#include<utility>
#include<cstring>

#define OCT(A,B,C,D,E,F,G,H) ((H) + (G)*8 + (F)*64 + (E)*512 + (D)*4096 + (C)*32768 + (B)*262144 + (A)*2097152)
using namespace std;

struct state { int _0,_1,_2,_3,_4,_5,_6,_7; };
typedef struct state state;
typedef pair<state,int> P;
unsigned short int map[0100000000];

int main(void) {
    int _0,_1,_2,_3,_4,_5,_6,_7;
    queue<P> q;
    q.push( P({0,1,2,3,4,5,6,7},0));

    memset(map, 0, sizeof(map));
    while(~scanf("%d%d%d%d%d%d%d%d",&_0,&_1,&_2,&_3,&_4,&_5,&_6,&_7)) {
        if(_0==0&&_1==1&&_2==2&&_3==3&&_4==4&&_5==5&&_6==6&&_7==7) {
            printf("0\n");
            continue;
        }

        while(map[OCT(_0,_1,_2,_3,_4,_5,_6,_7)] == 0) { 
            P e = q.front(); q.pop();
            state t = e.first;

            if(map[OCT(t._0,t._1,t._2,t._3,t._4,t._5,t._6,t._7)]) continue;

            map[OCT(t._0,t._1,t._2,t._3,t._4,t._5,t._6,t._7)] = e.second;

            if(t._0 == 0) {
                q.push(P({t._1,t._0,t._2,t._3,t._4,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._4,t._1,t._2,t._3,t._0,t._5,t._6,t._7}, e.second+1));
            }else if(t._1 == 0) {
                q.push(P({t._1,t._0,t._2,t._3,t._4,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._5,t._2,t._3,t._4,t._1,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._2,t._1,t._3,t._4,t._5,t._6,t._7}, e.second+1));
            }else if(t._2 == 0) {
                q.push(P({t._0,t._2,t._1,t._3,t._4,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._3,t._2,t._4,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._6,t._3,t._4,t._5,t._2,t._7}, e.second+1));
            }else if(t._3 == 0) {
                q.push(P({t._0,t._1,t._3,t._2,t._4,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._7,t._4,t._5,t._6,t._3}, e.second+1));
            }else if(t._4 == 0) {
                q.push(P({t._4,t._1,t._2,t._3,t._0,t._5,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._3,t._5,t._4,t._6,t._7}, e.second+1));
            }else if(t._5 == 0) {
                q.push(P({t._0,t._1,t._2,t._3,t._5,t._4,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._5,t._2,t._3,t._4,t._1,t._6,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._3,t._4,t._6,t._5,t._7}, e.second+1));
            }else if(t._6 == 0) {
                q.push(P({t._0,t._1,t._6,t._3,t._4,t._5,t._2,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._3,t._4,t._6,t._5,t._7}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._3,t._4,t._5,t._7,t._6}, e.second+1));
            }else if(t._7 == 0) {
                q.push(P({t._0,t._1,t._2,t._7,t._4,t._5,t._6,t._3}, e.second+1));
                q.push(P({t._0,t._1,t._2,t._3,t._4,t._5,t._7,t._6}, e.second+1));
            }
        }
        printf("%d\n", map[OCT(_0,_1,_2,_3,_4,_5,_6,_7)]);
    }

    return 0;
}