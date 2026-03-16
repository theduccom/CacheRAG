#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main() {

    int i;
    int weight;

    while(cin >> weight) {
        i = 0;
        do {
            if(weight & 1) {
                cout << pow((double)2, (double)i);
                if(weight != 1) {
                    cout << ' ';
                }
            }
            i++;
        } while(weight >>= 1);
        cout << endl;
    }

}