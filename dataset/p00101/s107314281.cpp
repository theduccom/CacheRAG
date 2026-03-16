#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string str;
        getline(cin, str);

        size_t pos = 0;
        while ((pos = str.find("Hoshino", pos)) != string::npos) {
            str.replace(pos, 7, "Hoshina");
        }

        cout << str << endl;
    }

    return 0;
}