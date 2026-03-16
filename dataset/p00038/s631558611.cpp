#include <stdio.h>
#include <algorithm>
using namespace std;
int a[5];
int main() {
    while(~scanf("%d,%d,%d,%d,%d", &a[0], &a[1], &a[2], &a[3], &a[4])) {
        sort(a, a + 5);
        if((a[0] == a[1] || a[3] == a[4]) && a[1] == a[2] && a[2] == a[3]) printf("four card\n");
        else if((a[0] == a[1] && a[2] == a[3] && a[3] == a[4]) || (a[0] == a[1] && a[1] == a[2] && a[3] == a[4])) printf("full house\n");
        else if((a[0] + 1 == a[1] || (a[0] == 1 && a[1] == 10)) && a[1] + 1 == a[2] && a[2] + 1 == a[3] && a[3] + 1 == a[4]) printf("straight\n");
        else if(((a[0] == a[1] || a[2] == a[3]) && a[1] == a[2]) || (a[2] == a[3] && a[3] == a[4])) printf("three card\n");
        else {
            int p = 0; for(int i = 1; i < 5; i++) if(a[i - 1] == a[i]) p++;
            if(p == 2) printf("two pair\n");
            if(p == 1) printf("one pair\n");
            if(p == 0) printf("null\n");
        }
    }
    return 0;
}