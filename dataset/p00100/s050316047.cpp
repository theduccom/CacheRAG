#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        if (!n)
            break;

        int id, p, q;
        vector<int> ord;
        bool flag = false;
        map<int, long long> worker;
        
        for (int i = 0; i < n; i++) {
            cin >> id >> p >> q;
            if (worker.find(id) == worker.end())
                ord.push_back(id);
            worker[id] += (long long)p * q;
        }

        for (int i = 0; i < ord.size(); i++) {
            if (worker[ord[i]] >= 1000000) {
                cout << ord[i] << endl;
                flag = true;
            }
        }
        if (!flag)
            cout << "NA" << endl;
    }

    return 0;
}