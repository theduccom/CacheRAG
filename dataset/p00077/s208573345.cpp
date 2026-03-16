#include <iostream>

using namespace std;

int main()
{
    string inp;

    while (cin >> inp) {
        string ans;

        for (int i = 0; i < inp.size(); i++) {
            int n;
            char ch;

            if (inp[i] == '@') {
                n = inp[++i] - '0';
                ch = inp[++i];
                for (int j = 0; j < n; j++)
                    ans.push_back(ch);
            }
            else
                ans.push_back(inp[i]);
        }
        cout << ans << endl;
    }

    return 0;
}