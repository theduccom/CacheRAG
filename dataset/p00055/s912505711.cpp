#include <cstdio>
#include <iostream>
using namespace std;

#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)

int main(){
    double n;
    while(cin >> n){
        double t = n;
        n *= 2; t += n;
        n /= 3; t += n;
        n *= 2; t += n;
        n /= 3; t += n;
        n *= 2; t += n;
        n /= 3; t += n;
        n *= 2; t += n;
        n /= 3; t += n;
        n *= 2; t += n;
        printf("%.9f\n", t);
    }
    return 0;
}