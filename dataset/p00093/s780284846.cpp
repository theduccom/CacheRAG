#include <iostream>

void leapYear(int, int);
int main()
{
  int check1 = 0;
    while (true) {
        int a, b;
        std::cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }
        if (check1 == 1) {
            std::cout << std::endl;
        }
        check1 = 1;
        leapYear(a, b);
    }
    return 0;
}
void leapYear(int a, int b)
{
    int check2 = 0;
    for (int year = a; year <= b; ++year) {
      if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            std::cout << year <<std::endl;
            check2 = 1;
      }
    }
    if (check2 == 0) {
        std::cout << "NA" <<std::endl;
    }
}