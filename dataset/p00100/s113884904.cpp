#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n, e, p, q;
    vector< pair<int, unsigned long long> > data;
    vector< pair<int, unsigned long long> >::iterator it;

    while (cin >> n) {
        if(n == 0) break;

        data.clear();
        for (int i=0; i<n; i++) {
            cin >> e >> p >> q;

            it = data.begin();
            while (it != data.end()) {
                if(e == it->first) {
                    it->second += (unsigned long long)(p * q);
                    break;
                }
                it++;
            }
            
            if(it == data.end()) data.push_back(make_pair(e, (unsigned long long)(p * q)));
        }

        it = data.begin();
        bool isoutput = false;
        while (it != data.end()) {
            if(it->second >= 1000000) {
                cout << it->first << endl;
                isoutput = true;
            }
            it++;
        }
        if(!isoutput) cout << "NA" << endl;
    }
}