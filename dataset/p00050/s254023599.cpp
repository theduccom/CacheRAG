#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int p = 0, p1, p2;
    getline(cin, s);
    while (1) {
        p1 = s.find("peach", p);
        p2 = s.find("apple", p);
        if (p1 == -1 && p2 == -1) {
            break;
        }

        if (p2 == -1) {
            s.replace(p1, 5, "peach");
            p = p1 + 1;
        }
        else if (p1 == -1){
            s.replace(p2, 5, "peach");
            p = p2 + 1;
        }
        else if (p1 < p2) {
            s.replace(p1, 5, "apple");
            p = p1 + 1;
        }
        else {
            s.replace(p2, 5, "peach");
            p = p2 + 1;
        }
    }
    cout << s << endl;

    return 0;
}