#include <iostream>
#include <array>
using namespace std;

int main()
{
    int N;
    while (cin >> N, N) {
        auto count_list = array<int, 10>();

        while (N--) {
            int kind;
            cin >> kind;
            count_list[kind]++;
        }

        for (auto count : count_list) {
            if (count > 0) {
                while (count--) {
                    cout << '*';
                }
            } else {
                cout << '-';
            }
            cout << endl;
        }
    }
}