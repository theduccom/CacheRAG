#include <iostream>
bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

bool printLeapYears(int from, int to)
{
    bool found = false;
    for (int i = from; i <= to; i++) {
        if (isLeapYear(i)) {
            std::cout << i << std::endl;
            found = true;
        }
    }
    return found;
}

int main()
{
    int from, to;
    bool found;
    bool isFirst = true;
    while (true) {
        std::cin >> from >> to;
        if (from == 0 && to == 0) {
            break;
        }
        if (!isFirst) {
            std::cout << std::endl;
        }
        isFirst = false;
        if (!printLeapYears(from, to)) {
            std::cout << "NA" << std::endl;
        }
    }
}