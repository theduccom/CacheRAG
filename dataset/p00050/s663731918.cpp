#include <iostream>
#include <string>

using namespace std;

void replace_all(string &str, string src, string dst) {
    int index = 0;
    while (true) {
        index = (int)str.find(src, index);
        if (index == string::npos) break;
        str.replace(index, src.length(), dst);
    }
}

int main(void) {
    string str, apple = "apple", peach = "peach", dummy = "_____";
    getline(cin, str);
    replace_all(str, apple, dummy);
    replace_all(str, peach, apple);
    replace_all(str, dummy, peach);
    cout << str << endl;
    return 0;
}