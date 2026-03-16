#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int len;
    
    while (getline(cin, s)) {
        while (1) {
            len = s.size();
            for (int i = 0; i < len; i++) {
                if ('a' <= s[i] && s[i] <= 'z') {
                    if (s[i] == 'a') {
                        s[i] = 'z';
                    }
                    else {
                        s[i]--;
                    }
                }
            }
            int res1 = s.find("the");
            int res2 = s.find("this");
            int res3 = s.find("that");
            if ((res1 >= 0 && res1 < 80) || (res2 >= 0 && res2 < 80) || (res3 >= 0 && res3 < 80)) {
                cout << s << endl;
                break;
            }
        }
    }

    return 0;
}