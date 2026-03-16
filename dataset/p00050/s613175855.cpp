#include <iostream>
#include <string>

using namespace std;

const string a = "apple";
const string p = "peach";

int main()
{
    string inp;

    while (getline(cin, inp)) {
        string::size_type pos_a, pos_p;

        pos_a = inp.find(a);
        pos_p = inp.find(p);

        for ( ; pos_a != string::npos || pos_p != string::npos; ) {
            if (pos_a < pos_p) {
                inp.replace(pos_a, a.length(), p);
                pos_a = inp.find(a, a.length() + pos_a);
            }
            else {
                inp.replace(pos_p, p.length(), a);
                pos_p = inp.find(p, p.length() + pos_p);
            }
        }
        cout << inp << endl;        
    }

    return 0;
}