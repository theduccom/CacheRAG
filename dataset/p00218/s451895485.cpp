#include <iostream>
char whichClass(int math, int eng, int jpn)
{
    if (math == 100 || eng == 100 || jpn == 100) {
        return 'A';
    }
    if (math + eng >= 180) {
        return 'A';
    }
    int sum = math + eng + jpn;
    if (sum >= 240) {
        return 'A';
    }
    if (sum >= 210) {
        return 'B';
    }
    if (sum >= 150 && (math >= 80 || eng >= 80)) {
        return 'B';
    }
    return 'C';
}

int main()
{
    int n;
    int pm, pe, pj;
    while (true) {
        std::cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; i++) {
            std::cin >> pm >> pe >> pj;
            std::cout << whichClass(pm, pe, pj) << std::endl;
        }
    }
}