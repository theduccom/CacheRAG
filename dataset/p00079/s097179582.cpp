#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define itrep(it, a) for(it = (a).begin(); it != (a).end; it++)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
#define INF (1 << 30)
using namespace std;

typedef struct {
    double x, y;
}point;

double AreaOfTriangle(point a, point b, point c){
    b.x-=a.x;
    b.y-=a.y;
    c.x-=a.x;
    c.y-=a.y;
    return abs((b.x * c.y - b.y * c.x) / 2);
}

int main(){
    point point[22];
    int i = 0, second = 0, third = 1;
    double ans = 0;
    char g;
    while(cin >> point[i].x >> g >> point[i].y) i++;
    rep(j,i - 2){
        if(second < third) second+=2;
        else third+=2;
        ans+=AreaOfTriangle(point[0], point[second], point[third]);
    }
    printf("%.6lf\n",ans);
}