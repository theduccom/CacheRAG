#include <iostream>
#include <string>

using namespace std;

bool judgePnd(const string str)
{
        int i, j;

        i = 0;
        j = str.length() - 1;
        while (i < j) {
                if (str[i] - str[j]) {
                        break;
                }
                i++; j--;
        }

        return (i >= j) ? true : false;
}

int main()
{
        int ans = 0;
        string str;

        while (cin >> str) {
                bool b = judgePnd(str);
                if (b)
                        ans++;
        }

        cout << ans << endl;

        return 0;
}