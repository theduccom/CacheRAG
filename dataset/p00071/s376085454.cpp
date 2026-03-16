#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;
struct date{
    int x,y;
};
int main(){
    int n;
    cin >> n;
    int end=n;
    while(n--){
        string field[8];
        for(int i = 0; i < 8; i++){
            cin >> field[i];
        }
        int h,w;
        cin >> w >> h;
        date start = {w-1,h-1};
        field[h-1][w-1] = '0';
        queue<date> Q;
        Q.push(start);
        while(!Q.empty()){
            date d = Q.front();
            Q.pop();
            int dx[] = {1,-1,0,0,2,-2,0,0,3,-3,0,0},dy[] = {0,0,1,-1,0,0,2,-2,0,0,3,-3};
            for(int i = 0; i < 12; i++){
                int px = d.x+dx[i],py = d.y+dy[i];
                if(px < 0 || py < 0 || py >= 8 || px >= 8)continue;
                if(field[py][px] == '1'){
                    field[py][px] = '0';
                    date next = {px,py};
                    Q.push(next);
                }
            }
        }
        cout << "Data " << (end-n) << ":" << endl;
        for(int i = 0; i < 8; i++)cout << field[i] << endl;
    }
    return 0;
}