#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

int main(){
    while(true){
        int n;
        scanf("%d", &n);
        if(n == 0) break;
        int ans = 0;
        int d = 5;
        while(true){
            ans += n / d;
            d *= 5;
            if(d > n) break;
        }
        printf("%d\n", ans);
    }
    
    return 0;
}