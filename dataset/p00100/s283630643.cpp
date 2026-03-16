#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int data_num;
    while (cin >> data_num && data_num != 0) {
        vector<int> idx;
        map<int, long long> sale;

        while (data_num--) {
            int no, price, num;
            cin >> no >> price >> num;

            long long sum = static_cast<long long>(price) * num;
            if (sale.find(no) == sale.end()) {
                idx.push_back(no);
                sale.insert(make_pair(no, sum));
            } else {
                sale.at(no) += sum;
            }
        }

        bool is_NA = true;
        for (size_t i = 0; i < idx.size(); i++) {
            if (sale.at(idx.at(i)) >= 1000000) {
                cout << idx.at(i) << endl;
                is_NA = false;
            }
        }

        if (is_NA) {
            cout << "NA" << endl;
        }
    }

    return 0;
}