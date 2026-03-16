#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

constexpr int MAX_DIGIT = 80;

int main()
{
    int data_num;
    cin >> data_num;

    while (data_num--) {
        std::string in01_str, in02_str;
        cin >> in01_str >> in02_str;

        vector<char> in01_ch(in01_str.rbegin(), in01_str.rend());
        vector<char> in02_ch(in02_str.rbegin(), in02_str.rend());

        std::size_t size;
        if (in01_ch.size() < in02_ch.size()) {
            size = in02_ch.size();
            in01_ch.resize(size, '0');
        } else {
            size = in01_ch.size();
            in02_ch.resize(size, '0');
        }

        vector<int> in01(size), in02(size);
        for (unsigned i = 0; i < size; i++) {
            in01.at(i) = in01_ch.at(i) - '0';
            in02.at(i) = in02_ch.at(i) - '0';
        }

        vector<int> out;
        bool is_over = false;
        for (unsigned i = 0; i < size; i++) {
            int num = in01.at(i) + in02.at(i) + (is_over? 1: 0);
            is_over = (num > 9)? true: false;

            out.push_back(num % 10);
        }
        if (is_over) {
            out.push_back(1);
        }

        if (out.size() > MAX_DIGIT) {
            cout << "overflow" << endl;
            continue;
        }

        for (unsigned i = 0; i < out.size(); i++) {
            cout << out.at(out.size() - 1 - i);
        }
        cout << endl;
    }

    return 0;
}