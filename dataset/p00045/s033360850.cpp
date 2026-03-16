#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int price, quantity, sumPrice = 0, i = 0;
    double sumQuantity = 0;
    while (scanf("%d,%d", &price, &quantity) != EOF) {
        sumPrice += price * quantity;
        sumQuantity += quantity;
        i++;
    }
    printf("%d\n%d\n", sumPrice, (int) (sumQuantity / i + 0.5));
}