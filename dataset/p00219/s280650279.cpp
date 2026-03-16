#include <cstdio>
#include <algorithm>
using namespace std;
int icecream[10];

int main(){
    int n, t;
    for (; ;) {
        scanf("%d", &n);
        if (n == 0) break;
        fill(icecream, icecream+10, 0);
        for (int i = 0; i < n; i++) {
            scanf("%d", &t);
            icecream[t]++;
        }
        for (int i = 0; i < 10; i++) {
            if (icecream[i] == 0) printf("-\n");
            else {
                for (int j = 0; j < icecream[i]; j++) printf("*");
                printf("\n");
            }
        }
    }
    return 0;
}


