#include <iostream>
#include <vector>

using std::cout;

int main()
{
    int weight;
    while (std::cin >> weight) {
        std::vector<int> list;
        for (int bundou = 1; bundou <= 512; bundou *= 2) {
            if (weight % (bundou * 2) != 0) {
                list.push_back(bundou);
                weight -= bundou;
            }
            if (weight == 0) {
                break;
            }
        }

        for (auto i = 0; i < list.size(); i++) {
            if (i != 0) {
                cout << " ";
            }
            cout << list.at(i);
        }
        cout << std::endl;
    }

    return 0;
}