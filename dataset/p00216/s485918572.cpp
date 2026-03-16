#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int w;
        cin >> w;
        
        if (w==-1) {
            break;
        }
        
        int res;
        
        if (w<=10) {
            res = 1150;
        }
        else if (w<=20) {
            res = 1150+125*(w-10);
        }
        else if (w<=30) {
            res = 2400+140*(w-20);
        }
        else {
            res = 3800+160*(w-30);
        }
        
        cout << 4280-res << endl;
    }
}
