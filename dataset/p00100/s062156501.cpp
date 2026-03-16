#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) return 0;
        vector<int> id;
        // create vector the number of element is 4001
        // initialize all elements with -1
        vector<long long> sale(4001, -1);
        int x, y, z;

       for (int i=0; i < n; i++) {
           cin >> x >> y >> z;
           if (sale[x] == -1) {
               sale[x] = 0;
               id.push_back(x);
           }
           sale[x] += (long long) y * z;
       }
       bool na = true;
       for (int i=0; i < (int)id.size(); i++){
           if (sale[id[i]] >= 1000000) {
               cout << id[i] << endl;
               na = false;
           }
       }
       if (na) cout << "NA" << endl;
    }
}