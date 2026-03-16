#include <iostream>

int value (int pm, int pe, int pj);
int main()
{
    int N;
    std::cin >> N;
    while (N > 0) {
        for (int i = 0; i < N; i++) {
            int pm, pe, pj;	       
            std::cin >> pm >> pe >> pj;
            if (value (pm, pe, pj) == 1) {
                std::cout << "A" <<std::endl;
                } else if (value (pm, pe, pj) == 2) {
                std::cout << "B" <<std::endl;
                } else {
                std::cout << "C" <<std::endl;
                }
        }
    std::cin >> N;
    }
    return 0;
}

int value(int pm, int pe, int pj)
{
    if (pm == 100 || pe == 100 || pj == 100) {
    return 1;
    } else if (pm + pe >= 180) {
    return 1;
    } else if (pm + pe + pj >= 240) {
    return 1;
    } else if (pm + pe + pj >= 210) {
    return 2; 
    } else if (pm + pe + pj >= 150 && (pm >= 80 || pe >=80) ) {
    return 2;
    }else {
    return 3;
    }
}