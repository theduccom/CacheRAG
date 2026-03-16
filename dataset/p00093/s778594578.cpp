#include <iostream>

int LeapYear (int x);
int main()
{
    int a,b;
    std::cin >> a >> b;
    while (true) {
        int n = 0;
        if (a == 0 && b == 0) {
            break;
        } else {
            for (int i = a; i <= b; i++) {
                if (LeapYear (i) == 1) {
                    std::cout << i << std::endl;
                    n++;
            }				
        }
            if (n == 0) {
                std::cout << "NA" << std::endl;
            }
            std::cin >> a >> b;
            if (b != 0) {
                std::cout << std::endl;
            }
        }
    }
    return 0;
}

int LeapYear (int x)
{
    if (x % 400 == 0) {
    return 1;
    } else if (x % 100 == 0) {
    return 0;
    } else if (x % 4 == 0) {
    return 1;
    }else {
    return 0;
    }
}