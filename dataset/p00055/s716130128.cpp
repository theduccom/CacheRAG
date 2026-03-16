#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    double n;
    while (cin >> n) {
        double nums[10];
        nums[0] = n;
    
        for(int i=1;i < 10;++i) {
            if ((i+1)%2) nums[i] = nums[i-1]/3;
            else nums[i] = nums[i-1]*2;
        }
    
        double sum = 0.0;
    
        for(int i=0;i < 10;++i) sum += nums[i];

        printf("%.8f\n", sum);
    }

    return 0;
}