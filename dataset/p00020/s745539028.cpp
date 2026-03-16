#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;

    getline(cin, s);

    for(int i=0; i<s.length(); i++){
        s.at(i) = toupper(s[i]);
    }

    cout << s << endl;

    return 0;
}