#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(void) {
    int weight = 512, num;
   
    while(cin >> num) {
         vector<int> output;
        for(int r = weight; r > 0; r >>= 1) {
            while(num >= r) {
                num -= r;
                output.push_back(r);
            }
        }
        for(int r = (int)output.size() - 1; r >= 0; r--) {
            cout << output[r];
            if(r != 0) cout << " ";
            else cout << endl;
        }

    }
    return(0);
}