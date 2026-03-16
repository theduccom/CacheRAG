#include <stdio.h>
#include <stdbool.h>
void judge(int pe, int pm, int pj);
int main(void)
{
    int n, pe, pm, pj;
    while (1){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        for (int i = 0; i < n; ++i) {        
            scanf("%d %d %d", &pe, &pm, &pj);
            judge(pe, pm, pj);
        }
    }
}
void judge(int pe, int pm, int pj)
{
    int sum = pe + pm + pj;
    int sumem = pe + pm;
    bool flag2 = false;
    if (pm >= 80 || pe >= 80) {
        flag2 = true;
    }
    if(pe == 100 || pj == 100 || pm == 100 || sum >= 240 || sumem >= 180) {
        printf("A\n");
    } else if (sum >= 210) {
        printf("B\n");
    } else if (sum >= 150 && flag2 == true) {
        printf("B\n");
    } else {
        printf("C\n");
    }
}