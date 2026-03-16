#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX_PAY = 1e6 + 10;
array<bool, MAX_PAY> PrimeTable;

void makePrimeTable()
{
    fill(PrimeTable.begin(), PrimeTable.end(), true);

    PrimeTable.at(0) = PrimeTable.at(1) = false;

    for (int i = 2; i * i <= MAX_PAY; ++i) {
        for (int j = 2; j * i < MAX_PAY; ++j) {
            PrimeTable.at(j * i) = false;
        }
    }
}


int main()
{
    makePrimeTable();

    int cook_num, max_pay;

    while (cin >> cook_num >> max_pay) {
        // input
        if (cook_num == 0 && max_pay == 0) break;

        vector<int> dish(cook_num);
        vector<bool> dp(MAX_PAY);

        for (auto& it: dish) {
            cin >> it;
            dp.at(it) = true;
        }

        // solve
        for (int i = 0; i < cook_num; ++i) {
            for (int j = 0; j <= max_pay; ++j) {
                if (dp.at(j) && j + dish.at(i) <= max_pay) {
                    try {
                        dp.at(j + dish.at(i)) = true;
                    } catch(...){
                        cout << j + dish.at(i) << endl;
                    }
                }
            }
        }

        // return max_ans
        int max_ans = 0;
        for (int temp = 0; temp <= max_pay; ++temp) {
            if (dp.at(temp) && PrimeTable.at(temp)) max_ans = temp;
        }

        // output
        if (max_ans) {
            cout << max_ans << endl;
        } else {
            cout << "NA" << endl;
        }
    }

    return 0;
}