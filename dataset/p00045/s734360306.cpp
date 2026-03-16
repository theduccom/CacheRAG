#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    int sum = 0, kosu = 0, count = 0;
    int tanka, suuryou;
    while(scanf("%d,%d", &tanka, &suuryou) != EOF) {
        sum += tanka * suuryou;
        kosu += suuryou;
        count++;
    }
    int ave = round(kosu / (double)count);
    cout << sum << endl << ave << endl;
    
    return(0);
}