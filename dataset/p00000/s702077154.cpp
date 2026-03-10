#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
    int i, o;
    for (o = 1; o <= 9; ++o) {
        for (i = 1; i <= 9; ++i) {
            cout << o << "x" << i << "=";
            cout << i * o << endl;
        }
    }
    return 0;
}

