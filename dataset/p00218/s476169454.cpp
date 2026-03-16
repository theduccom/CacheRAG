#include<stdio.h>

int grade(int pm, int pe, int pj)
{   
    int t;
    int sum = pm + pe +pj;
    if ((pm == 100) || (pe == 100) || (pj == 100)) {
        t = 0;
    } else if (pm + pe >= 180) {
        t = 0;
    } else if (sum >= 240) {
        t = 0;
    } else if (sum >= 210) {
        t = 1;
    } else if ((sum >= 150) && ((pe >= 80) || (pm >= 80))) {
        t = 1;
    } else {
        t = 2;
    } 
    return t;
}
    
        
int main(void)
{
    int n;
    while(1) {
        scanf("%d", &n);
        if ( n == 0) {
            break;
        } else {    
            for (int i = 0; i < n; i++) {
                int pm, pe, pj;
                scanf("%d %d %d", &pm, &pe, &pj);
                int t = grade(pm, pe, pj);
                if (t == 0) {
                    printf("A\n");
                } else if (t == 1) {
                    printf("B\n");
                } else {
                    printf("C\n");
                }
            }
        }
    }
    return 0;
}