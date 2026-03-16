#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int n, m, p[1000];

int main(){
    for(; scanf("%d%d", &n, &m), n||m;){
        for(int x = 0; x < n; x++){
            scanf("%d", p+x);
        }
        sort(p, p+n, greater<int>());
        int ans = 0, z;
        for(int x = 0; x < n; x++){
            if((x+1)%m) ans += p[x];
        }
        printf("%d\n", ans);
    }
    return 0;
}