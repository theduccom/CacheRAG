#include <iostream>

bool isLeapYear(int year);
template <class Callback>
bool findLeapYears(int from, int to, Callback callback);

int main()
{
    bool is_first_data = true;
    while (true) {
        int from, to;
        std::cin >> from >> to;
        if (from == 0 && to == 0) {
            break;
        }
        if (!is_first_data) {
            std::cout << '\n';
        }
        bool leap_year_found = findLeapYears(from, to, [](int year) {
            std::cout << year << std::endl;
        });
        if (!leap_year_found) {
            std::cout << "NA" << std::endl;
        }
        is_first_data = false;
    }
    return 0;
}

bool isLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
    if (year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    return false;
}

template <class Callback>
bool findLeapYears(int from, int to, Callback callback)
{
    bool leap_year_found = false;
    for (int y = from; y <= to; ++y) {
        if (isLeapYear(y)) {
            leap_year_found = true;
            callback(y);
        }
    }
    return leap_year_found;
}