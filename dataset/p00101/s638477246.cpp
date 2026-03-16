#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int n;
    char c;
    string s;

    cin >> n;
    cin.ignore();
    
    for (int i=0; i<n; i++) {
        getline(cin, s);
        while(s.find("Hoshino") != -1) {
            s.replace(s.find("Hoshino")+6, 1, "a");
        }
        cout << s << endl;
    }

    return 0;
}