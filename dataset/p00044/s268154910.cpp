#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, bool> elem;

int main()
{
    vector<elem> is_prime(50021 + 1);

    is_prime.at(0) = elem(0, false);
    is_prime.at(1) = elem(1, false);

    for (size_t i = 2; i < 50021 + 1; i++) {
        is_prime.at(i) = elem(i, true);
    }

    for (size_t i = 2; i < is_prime.size() / 2; i++) {
        if (is_prime.at(i).second) {
            for (size_t j = i * 2; j < is_prime.size(); j += i) {
                is_prime.at(j).second = false;
            }
        }
    }

    int in;
    while (cin >> in) {
        for (size_t it = in - 1; it != 0; it--) {
            if (is_prime.at(it).second) {
                cout << is_prime.at(it).first << " ";
                break;
            }
        }

        for (size_t it = in + 1; it != is_prime.size(); it++) {
            if (is_prime.at(it).second) {
                cout << is_prime.at(it).first << endl;
                break;
            }
        }
    }

    return 0;
}