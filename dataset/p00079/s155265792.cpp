#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

typedef struct vec vec;

struct vec {
    double x, y;
};


static double cross(vec a, vec b){  //外積
    return a.x * b.y - a.y * b.x;
}

int main(void){
    double x[21], y[21];
    int i, n = 0;
    double sum = 0;
    while(scanf("%lf,%lf", &x[n], &y[n]) != EOF)   n++;
    x[n] = x[0];
    y[n] = y[0];
    for(i = 0; i < n; i++){
        vec a = {x[i], y[i]};
        vec b = {x[i + 1], y[i + 1]};
        sum += cross(a,b);    
    }

    cout << fixed << setprecision(6) <<fabs(sum) / 2.0 << endl;
    return 0;
}
