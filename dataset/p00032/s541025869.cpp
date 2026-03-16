#include <cstdio>
using namespace std;

int main(){
    int a, b, c, r = 0, l = 0;
    while( scanf("%d,%d,%d", &a, &b, &c) != EOF ){
        if( a*a + b*b == c*c ) r++;
        if( a == b ) l++;
    }
    printf("%d\n%d\n", r, l);
    return 0;
}