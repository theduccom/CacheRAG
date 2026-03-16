#include <iostream>

char calcClassOfStudent(int math, int english, int japanese);

int main()
{
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) {
            break;
        }
        for (int i = 0; i < n; ++i) {
            int math, english, japanese;
            std::cin >> math >> english >> japanese;
            std::cout << calcClassOfStudent(math, english, japanese) << std::endl;
        }
    }
    return 0;
}

char calcClassOfStudent(int math, int english, int japanese)
{
    if (math == 100 || english == 100 || japanese == 100) {
        return 'A';
    }
    if ((math + english) / 2 >= 90) {
        return 'A';
    }
    const int average_of_all = (math + english + japanese) / 3;
    if (average_of_all >= 80) {
        return 'A';
    }
    if (average_of_all >= 70) {
        return 'B';
    }
    if (average_of_all >= 50 && (math >= 80 || english >= 80)) {
        return 'B';
    }
    return 'C';
}