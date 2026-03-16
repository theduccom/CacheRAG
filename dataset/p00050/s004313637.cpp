#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    string str; 
    while (getline(cin,str)) {
        for (int i = 0; i < (int)str.size(); i++) {
            string key = str.substr(i, 5), repl;
            if (key == "apple") {
                repl = "peach";
                for (int j = 0; j < 5; j++) {
                    str[i+j] = repl[j];
                }
            } else if (key == "peach") {
                repl = "apple";
                for (int j = 0; j < 5; j++) {
                    str[i+j] = repl[j];
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}