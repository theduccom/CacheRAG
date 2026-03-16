#include <iostream>

bool ifEndValInput(int input_n1, int input_n2);
bool inputValRangeCheck(int input_n1, int input_n2);
void printLeapYear(int start_y, int end_y);
bool isLeapYear(int year);


int main()
{
    bool is_input_started = true;
    while (true) {
        int start_year, end_year;
        std::cin >> start_year >> end_year;
        if (ifEndValInput(start_year, end_year)) {
            break;
        }
        if (!is_input_started) {
            std::cout << std::endl;
        } else {
            is_input_started = false;

        }
        if (inputValRangeCheck(start_year, end_year)) {
            printLeapYear(start_year, end_year);
        }  
    }
    return 0;
}

bool ifEndValInput(int input_n1, int input_n2)
{
    if (input_n1 == 0 && input_n2 == 0) {
        return true;
    }
    return false;
}

bool inputValRangeCheck(int input_n1, int input_n2)
{
    if (input_n1 <= 0 || input_n1 > input_n2 || input_n2 >= 3000) {
        return false;
    }
    return true;
}


bool isLeapYear(int year)
{
    if (year % 400 == 0) {
        return true;
    } else if (year % 100 == 0) {
        return false;
    } else if (year % 4 == 0) {
        return true;
    } else {
        return false;
    }
}

void printLeapYear(int start_y, int end_y)
{
    bool does_leap_year_exist = false;
    for (int i = start_y; i <= end_y; i++) {
        if (isLeapYear(i)) {
            std::cout << i << std::endl;
            does_leap_year_exist = true;
        }
    }
    if (!does_leap_year_exist) {
        std::cout << "NA" << std::endl;
    }
}