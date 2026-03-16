#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

string inc(string str, int c)
{
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] < 'a' || 'z' < str[i])
            continue;
        int tmp = (str[i] - 'a' + c)%26;
        str[i] = 'a' + tmp;
    }
    return str;
}

int main(void)
{
    bool flag;
    string str;
    while (getline(cin, str)) {

    for (int i = 0; i < 26; ++i) {
        flag = false;
        string tmp;
        stringstream ss;
        ss << str;
        while (!ss.eof()) {
            ss >> tmp;
            tmp = inc(tmp, i);
            flag += tmp == "this";
            flag += tmp == "that";
            flag += tmp == "the";
            flag += tmp == "this.";
            flag += tmp == "that.";
            if (flag)
                break;
        }
        if (flag) {
            cout << inc(str, i) << endl;
            break;
        }
    }
    }
    return 0;
}




