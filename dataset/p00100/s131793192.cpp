#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int i, N;
    long long p, q;

    while (cin >> N && N != 0) {
        cin.get();

        map<int, long long> sales;
        vector<int> sequence;        
        
        for (int n = 0; n != N; ++n) {
            cin >> i >> p >> q;
            if (!sales.count(i)) { 
                sequence.push_back(i);
            }
            sales[i] += p * q;
        }

        bool printNA = true;
        
        for (int i = 0; i != sequence.size(); ++i) {
            if (sales[sequence[i]] >= 1000000) {
                cout << sequence[i] << endl;
                printNA = false;
            }
        }

        if (printNA) {
            cout << "NA" << endl;
        }
    }
    return 0;
}