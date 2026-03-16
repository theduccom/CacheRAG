#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* add(const char* a, const char* b)
{
    int sizeA, sizeB, sizeX;
    int A, B, C;
    char* x;
    char* t;
    int la, lb, lx;
    C = 0;
    sizeA = strlen(a);
    sizeB = strlen(b);
    sizeX = (sizeA > sizeB ? sizeA : sizeB)+1;
    x = (char*)calloc(sizeX, 1);
    la = sizeA - 1;
    lb = sizeB - 1;
    lx = sizeX - 1;
    
    while(lx >= 0){
        A = la >= 0 ? a[la] - '0' : 0;
        B = lb >= 0 ? b[lb] - '0' : 0;
        x[lx] = '0' + (A + B + C) % 10;
        C = (A + B + C) / 10;
        la--;
        lb--; 
        lx--;
    }
    if (*x == '0'){
        t = (char*)calloc(sizeX - 1, 1);
        strcpy(t, x + 1);
        free(x);
        return t;
    }
    return x;
}
int main()
{
    int i;
    int N;
    char first[201];
    char second[201];
    char* result;
    scanf("%d", &N);
    for(i = 0; i < N; ++i){
        scanf("%s", first);
        scanf("%s", second);
        if(strlen(first) > 80
        || strlen(second) > 80){
            printf("overflow\n");
            continue;
        }
        result = add(first, second);
        if(strlen(result) <= 80){
            printf("%s\n", result);
        }else{
            printf("overflow\n");
        }
        free(result);
    }
    return 0;
}
 