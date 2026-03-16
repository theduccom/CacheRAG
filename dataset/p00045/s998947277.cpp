#include <iostream>
using namespace std;

int main(){
    int unit_price;
    int number;
    int sum = 0;
    int number_sum = 0;
    int cnt = 0;
    int average;


    while(scanf("%d,%d", &unit_price, &number) != EOF){
        sum += unit_price * number;
        number_sum += number;
        cnt++;
    }
    average = (int)((double)number_sum / cnt + 0.5);

    cout << sum << endl;
    cout << average << endl;

    return 0;
}