#include <stdio.h>

#define N 10

int main(void){
    int len[N], totalLn;
    int v1, v2;
    double joinTm, joinPt;
    
    while(1){
        if (scanf("%d,", &len[0]) ==EOF) break;
        totalLn = len[0];
        for (int i=1; i<N; i++){
            scanf("%d,", &len[i]);
            totalLn += len[i];
        }
        scanf("%d,%d", &v1, &v2);
        joinTm = (double)totalLn / (v1 + v2);
        joinPt = joinTm * v1;
        for (int i=0; i<N; i++){
            joinPt-=len[i];
            if (joinPt <= 0){
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}