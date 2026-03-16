//
//  main.cpp
//  joi
//
//  Created by 8595198919 on 14/06/09.
//  Copyright (c) 2014年 8595198919. All rights reserved.
//

#include <iostream>
#include <list>
#include <stack>
#include <cstdio>
#define rep(i,n) for(int i = 0;i < n;i++)
#define Rep(i,n) for(int i = 1;i <= n;i++)
#define fs first
#define sc second
#define mp make_pair
using namespace std;

int w,h;
int xs,ys,xg,yg;
int n;
int goal[2];
int dx[4]={1,0,0,-1};
int dy[4]={0,1,-1,0};
int map_[105][105];
bool went[105][105];
int c,d,x,y;

bool search(int x,int y){
    if(map_[x][y]==0)
        return 0;
    if(x==xg&&y==yg)
        return 1;
    rep(i,4){
        int xnext = x +dx[i];
        int ynext = y +dy[i];
        if(went[xnext][ynext])
            continue;
        if(map_[xnext][ynext]==map_[x][y]){
            went[x][y]=true;
            if(search(xnext,ynext))
                return 1;
        }
    }
    return 0;
}


int main(){
    while(scanf("%d %d",&w,&h),(w!=0&&h!=0)){
        rep(i,w+5){
            rep(j,h+5){
                map_[i][j]=0;
                went[i][j]=0;
            }
        }
        scanf("%d %d %d %d %d",&xs,&ys,&xg,&yg,&n);
        xs++,ys++,xg++,yg++;
        rep(i,n){
            scanf("%d %d %d %d",&c,&d,&x,&y);
            x++,y++;
            rep(i,(dx[d]+1)*2){
                rep(j,(dy[d]+1)*2){
                    map_[x+i][y+j] = c;
                }
            }
        }
        if(search(xs,ys))
            cout << "OK" << endl;
        else
            cout <<"NG"<<endl;
    }
}