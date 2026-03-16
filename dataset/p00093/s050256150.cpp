#include <iostream>

using std::cout;
using std::endl;

bool isLeapYear(int year);

int main()
{
    int start, end;
    while (true) {
        std::cin >> start >> end;

        if (start == 0 && end == 0) {
            break;
        }

        static bool first_output = true;
        if (!first_output) {
            cout << endl;
        }
        first_output = false;

        int cnt = 0;
        for (int year = start; year <= end; year++) {
            if (isLeapYear(year)) {
                cout << year << endl;
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << "NA" << endl;
        }
    }

    return 0;
}

bool isLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else {
        return (year % 4 == 0);
    }
}