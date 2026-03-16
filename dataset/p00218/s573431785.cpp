#include <iostream>
char judge(int math, int eng, int jap);
 
int main()
{
    int n, pm, pe, pj;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
 
        for (int i = 0; i < n; i++) {
            std::cin >> pm >> pe >> pj;
            std::cout << judge(pm, pe, pj) << std::endl;
        }
    }
     
    return 0;
}
 
char judge(int math, int eng, int jap)
{
    float two_ave = (math + eng) / 2;
    float all_ave = (math + eng + jap) / 3;
 
    if (math == 100 || eng == 100 || jap == 100) {
        return 'A';
    } else if (two_ave >= 90) {
        return 'A';
    } else if (all_ave >= 80) {
        return 'A';
    } else if (all_ave >= 70) {
        return 'B';
    } else if (all_ave >= 50 && (math >= 80 || eng >= 80)) {
        return 'B';
    } else {
        return 'C';
    }
 
}