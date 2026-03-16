#include <stdio.h>

#define MIN(A,B) ((A)<(B)?(A):(B))

int main(){
    int facterCnt2=0;
    int facterCnt5=0;
    int n;
    
    while (scanf("%d",&n)!=EOF){
        if (n==0) break;
        facterCnt2 = facterCnt5 = 0;
        for (int skip=2; skip<20000; skip *=2){
            facterCnt2 += n/skip;
        }
        for (int skip=5; skip<20000; skip *=5){
            facterCnt5 += n/skip;
        }
        printf("%d\n", MIN(facterCnt2,facterCnt5));
    }
    
    
    return 0;
}