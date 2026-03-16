#include <iostream>
#include <string>
using namespace std;
 
int main() {    
    string line;
     
    while (getline(cin,line)) {
        for (int i = 0; i != 26; i++) {
            for (int j = 0; j != line.size(); j++) {
                if (isalpha(line[j])) {
                    line[j] = (line[j] - 'a' + 1) % 26 + 'a';
                }            
            }
            if (line.find("the") != string::npos || line.find("this") != string::npos || line.find("that") != string::npos) {break;}                    
        }
        cout << line << endl;
    }    
    return 0;
}