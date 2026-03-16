#include <iostream>
void uruu(int year, bool&);
 
int main()
{
    int a, b;
    std::cin >> a >> b;
     
    while (true) {
        bool write = false;
 
        for (int i = a; i <= b; i++) {
            uruu(i, write);
        }
        if (!write) {
            std::cout << "NA" << std::endl;
        }
 
        std::cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        std::cout << std::endl;
    }
 
    return 0;
}
 
 
void uruu(int year, bool& write)
{
    if (year % 400 == 0) {
        std::cout << year << std::endl;
        write = true;
        return;
    } else if (year % 100 == 0) {
        return;
    } else if (year % 4 == 0) {
        std::cout << year <<std::endl;
        write = true;
        return;
    } else {
        return;
    }
}