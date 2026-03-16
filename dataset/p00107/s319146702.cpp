// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>

int main()
{
    while (true) {
        int d, w, h;
        std::cin >> d >> w >> h;
        if (d == 0 && w == 0 && h == 0) {
            break;
        }
        
        float dw_r, dh_r, wh_r;
        dw_r = std::sqrt(d * d + w * w) / 2.0f;
        dh_r = std::sqrt(d * d + h * h) / 2.0f;
        wh_r = std::sqrt(w * w + h * h) / 2.0f;
        
        int n;
        std::cin >> n;
        std::vector<int> r(n);
        for (int i = 0; i < n; i++) {
            std::cin >> r[i];
            if (dw_r < r[i] || dh_r < r[i] || wh_r < r[i]) {
                printf("OK\n");
            } else {
                printf("NA\n");
            }
        }
    }
    
    return 0;
}


