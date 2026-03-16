#include <stdio.h>

int main(void){
    int p, n, s, a, c;
    s = 0; a = 0; c = 0;
    while( scanf("%d,%d", &p, &n) != EOF ){
        c++;
        s += p * n;
        a += n; 
    }
    if( (double)a/c - a/c >= 0.5 ) a = a/c+1;
    else a = a/c;
    printf("%d\n%d\n", s, a);
    return 0;
}