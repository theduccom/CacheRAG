#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int unit_price;
    int sale_num;
    char ch;
    int count = 0;
    int sum = 0;
    int total_sale_num = 0;
    while(cin >> unit_price >> ch >> sale_num)
    {
        sum += unit_price * sale_num;
        total_sale_num += sale_num;
        count++;
    }
    cout << sum << endl;
    cout << round((double)total_sale_num / count) << endl;
    return 0;
}
