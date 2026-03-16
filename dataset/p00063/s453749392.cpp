#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 0;
    string s;
    while (cin >> s){
        bool f = 1;
        for (int i = 0, j = s.size() - 1; i < j; i++, j--){
            if (s[i] != s[j]){
                f = 0; break;
            }
        }
        n += f;
    }
    cout << n << endl;
}