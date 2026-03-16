#include <cstdio>
#include <cmath>
using namespace std;

int main(){
    double x, h;
    while( scanf("%lf", &x), scanf("%lf", &h), x||h ){
        printf("%lf\n",x*x + x*sqrt(x*x+4*h*h));
    }
    return 0;
}