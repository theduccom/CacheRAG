#include <stdio.h>
#include <math.h>

int main(void){
    int prcSum=0, numSum=0;
    int times=0;
    int prc,num;
    int numAv;
    
    while (scanf("%d,%d", &prc, &num)!=EOF){
        prcSum += prc*num;
        numSum += num;
        times++;
    }
    numAv = floor((double)numSum/times + 0.5);
    printf("%d\n%d\n", prcSum, numAv);
    return 0;
}