#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#define ALL(A)		(A).begin(),(A).end()
#define DUMP(A)    cout<<#A<<"="<<(A)<< endl
#define SIZE(A)    (int)((A).size())
using namespace std;
typedef long long ll;

int main(){
    int n,m;
    int a,b,c,d;
    const int INF=10000000;
    scanf("%d\n%d\n",&n,&m);
    int dist[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j]=INF;
        }
    }
    for(int i=0;i<m;i++){
        scanf("%d,%d,%d,%d\n",&a,&b,&c,&d);
        a--;b--;
        dist[a][b]=c;
        dist[b][a]=d;
    }
    int fr,to,y1,y2;
    scanf("%d,%d,%d,%d\n",&fr,&to,&y1,&y2);
    fr--;to--;
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    printf("%d\n",y1-y2-dist[fr][to]-dist[to][fr]);

}