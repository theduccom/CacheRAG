#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
const int INF=10000000;
int map[21][21];
 
int main(void){
    int a,b,c;
    int d[4];
    int ans;
    int n,m;
    for(a=0;a<=20;a++){
        for(b=0;b<=20;b++){
            map[b][a]=INF;
            if(b==a)map[b][a]=0;
        }
    }
    cin >> n;
    cin >> m;
    for(a=0;a<m;a++){
        scanf("%d,%d,%d,%d",&d[0],&d[1],&d[2],&d[3]);
        map[d[0]][d[1]]=d[2];
        map[d[1]][d[0]]=d[3];
    }
    for(a=1;a<=n;a++){
        for(b=1;b<=n;b++){
            for(c=1;c<=n;c++){
                map[c][b]=min(map[c][b],map[c][a]+map[a][b]);
            }
        }
    }
    scanf("%d,%d,%d,%d",&d[0],&d[1],&d[2],&d[3]);
    ans=d[2]-d[3]-map[d[0]][d[1]]-map[d[1]][d[0]];
    cout << ans <<endl;
    return 0;
}
