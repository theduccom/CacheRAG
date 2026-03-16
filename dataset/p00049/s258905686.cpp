#include <stdio.h>
#include <string.h>

int main(void){
    int id;
    char blood[2];
    int bldCnt[4];
    
    bldCnt[3]=bldCnt[2]=bldCnt[1]=bldCnt[0]=0;
    while (scanf("%d,%s",&id,blood)!=EOF){
        if (strcmp(blood,"A")==0) bldCnt[0]++;
        if (strcmp(blood,"B")==0) bldCnt[1]++;
        if (strcmp(blood,"AB")==0) bldCnt[2]++;
        if (strcmp(blood,"O")==0) bldCnt[3]++;    
    }
    for (int i=0; i<4; i++){
        printf("%d\n", bldCnt[i]);
    }

    return 0;
}