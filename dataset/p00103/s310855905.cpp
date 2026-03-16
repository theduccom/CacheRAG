#include <cstdio>
#include <cstring>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
int main()
{
    int point, runner[4], out, n;
    char event[16];
    scanf("%d", &n);
    point = out = 0;
    rep(i, 4) runner[i] = 0;
    while (true) {
        scanf("%s", event);
        runner[0] = 1;
        if (!strcmp(event, "HIT")) {
            if (runner[3]) point++;
            rep(i, 3) runner[3-i] = runner[2-i];
        }
        else if (!strcmp(event, "OUT")) {
            out++;
            if (out == 3) {
                printf("%d\n", point);
                n--;
                if (n == 0) break;
                point = out = 0;
                memset(runner, 0, sizeof(runner));
            }
        }
        else {
            rep(i, 4) if (runner[i]) point++;
            memset(runner, 0, sizeof(runner));
        }
    }
    return 0;
}