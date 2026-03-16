#define _CRT_SECURE_NO_WARNINGS
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char ** argv) {
    int a, b;
    for (int q = 0;; q++){
        scanf("%d%d", &a, &b);
        if (a == 0) break;
        if (q != 0) puts("");
        auto is_uruu = [](int y){
            if (y % 400 == 0) return true;
            return y % 4 == 0 && y % 100 != 0;
        };
        int na = true;
        for (int i = a; i <= b; i++){
            if (is_uruu(i)){
                na = false;
                printf("%d\n", i);
            }
        }
        if (na) puts("NA");
    }
}