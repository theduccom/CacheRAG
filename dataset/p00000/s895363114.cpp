#include<iostream>
using namespace std;

int main(){
    for (int left = 1; left <= 9; left++) {
        for (int right = 1; right <= 9; right++) {
            cout << left << "x" << right << "=" << left * right << endl;
        }
    }
    return 0;
}