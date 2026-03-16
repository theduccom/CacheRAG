#include <iostream>
using namespace std;

int main() {

    int input;

    while(cin >> input,input){
        int p = 5, count = 0;
        while(true){
            count += input / p;
            p *= 5;
            if(input < p){
                cout << count << endl;
                break;
            }
        }
    }

    return 0;
}
