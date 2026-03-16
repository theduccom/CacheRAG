#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    double a[1000000];
    int i = 0;
    while( scanf("%lf", a+i) != EOF ) i++;
    sort(a, a+i);
    printf("%lf\n", a[i-1] - a[0]);
    return 0;
}