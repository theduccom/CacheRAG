#include <cstdio>

int main(){
    int m, n;
    int total = 0, num = 0, row = 0;
    while( scanf("%d,%d\n", &m, &n) != EOF ){
        total += m * n; //ÌàzÌvÉÁZ
        num += n;       //ÌÌÊÌÉÁZ
        row++;          //üÍÌsðâ·
    }
    int ans = (int)(num / (double)row + 0.5); //ÌÊÌ½Ï(lÌÜü·é)
    printf("%d\n%d\n", total, ans );
}