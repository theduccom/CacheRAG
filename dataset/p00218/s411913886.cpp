#include <iostream>


char dividing(int math, int english, int japanese)
{
    if (math == 100 || english == 100 || japanese == 100) {
        return 'A';
    } else if ((math + english) / 2 >= 90) {
        return 'A';
    } else if ((math + english + japanese) / 3 >= 80) {
        return 'A';
    } else if ((math + english + japanese) / 3 >= 70) {
        return 'B';
    } else if ((math + english + japanese) / 3 >= 50) {
        if (math >= 80 || english >= 80) {
            return 'B';
        } else {
            return 'C';
        }
    } else {
        return 'C';
    }
}


int main()
{
    int math, english, japanese, n;  //n:size of dataset
    std::cin >> n;
    while (n != 0) {
        for (int i = 0; i < n; i++) {
            std::cin >> math >> english >> japanese;
            std::cout << dividing(math, english, japanese) << std::endl;
        }
        std::cin >> n;
    }
    return 0;
}