/* 
 * File:   main.cpp
 * Author: freebsd
 *
 * Created on 2014/08/28, 10:07
 */

#include <cstdio>

using namespace std;

int main() {
    while (true) {
        int n = 0, pm = 0, pe = 0, pj = 0;
        int ave = 0, avepe = 0;
        
        scanf("%d", &n);
        
        if(n == 0) break;
        
        for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &pm, &pe, &pj);
        
        avepe = (pm + pe) / 2;
        ave = (pm + pe + pj) / 3;
        
        if(pm == 100 || pe == 100 || pj == 100) printf("A\n");
        else if(avepe >= 90) printf("A\n");
        else if(ave >= 80) printf("A\n");
        else if(ave >= 70) printf("B\n");
        else if(ave >= 50 && (pm >= 80 || pe >= 80)) printf("B\n");
        else printf("C\n");
        }
    }
       
    return 0;
}