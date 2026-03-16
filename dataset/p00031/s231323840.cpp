#include <iostream>
#include <cstdlib>

#define TRUE 1
#define FALSE 0

int use_num[10];

int get_input(void) {
    int i;
    std::cin >> i;
    if (std::cin.fail()) 
        exit(0);
    return i;
}

int power(int m, int n) {
    int acc = 1;
    for (int i = 0; i < n; i++) {
        acc *= m;
    }
    return acc;
}    

void solve(int weight) {
    for (int i = 9; i >= 0; i--) {
        if (power(2, i) > weight) {
            use_num[i] = FALSE;
        } else {
            use_num[i] = TRUE;
            weight -= power(2, i);
        }
    }
}

void output(void) {
    // find last TRUE elem
    int last;
    for (int i = 0; i <= 9; i++) {
        if (use_num[i] == TRUE) {
            last = i;
        }
    }

    for (int i = 0; i < last; i++) {
        if (use_num[i] != FALSE) {
            std::cout << power(2, i) << ' ';
        }
    }
    if (use_num[last] != FALSE) {
        std::cout << power(2, last);
    }
    std::cout << std::endl;
}

int main(void) {
    int weight;
    while (weight = get_input()) {
        solve(weight);
        output();
    }
    return 0;
}