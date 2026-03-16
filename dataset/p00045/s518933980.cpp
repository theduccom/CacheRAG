#include <iostream>

using namespace std;

int main()
{
    int sum;
    int price, num;
    int cnt;
    double ave;
    char ch;

    sum = ave = cnt = 0;
    while (cin >> price >> ch >> num) {
        sum += (price * num);
        ave += num;
        cnt++;
    }
    cout << sum << '\n' << (int)((ave / cnt) + 0.5) << endl;
    
    return 0;
}