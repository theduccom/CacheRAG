
#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string input;
    const int alph_lim = 26;
 
    while (getline(cin, input, '\n')) {
        for (int i = 0; i < alph_lim; i++) {
            for (int j = 0; j < input.size(); j++) {
                if (islower(input[j])) {
                    input[j]++;
                    if (input[j] > 'z') 
                        input[j] -= alph_lim;
                }
            }
 
            if (input.find("the") != string::npos ||
                input.find("this") != string::npos ||
                input.find("that") != string::npos) {
                cout << input << endl;
                break;
            }
        }
    }
 
    return 0;
}