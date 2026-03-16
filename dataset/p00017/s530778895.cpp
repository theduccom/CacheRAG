#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    while (getline(cin, s)) {
        for (int o = 0; ; o++) {
            string p = s;
            for (int i = 0; i < p.size(); i++) {
                if (isalpha(p[i])) {
                    p[i] = ((p[i] - 'a' + o) % 26) + 'a';
                }
            }
            if (p.find("that") != -1 || p.find("this") != -1 || p.find("the") != -1) {
                cout << p << endl;
                break;
            }
        }
    }
}