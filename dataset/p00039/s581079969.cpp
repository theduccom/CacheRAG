#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

int main()
{
        map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;
        string str;

        while (cin >> str) {
                stack<int> st;
                int tmp, ans = 0;
                for (unsigned int i = 0; i < str.length(); i++) {
                        if (!st.empty() && (roman[str[i]] > st.top())) {
                                tmp = roman[str[i]] - st.top();
                                st.pop();
                                st.push(tmp);
                        } else {
                                st.push(roman[str[i]]);
                        }
                }
                while (!st.empty()) {
                        ans += st.top();
                        st.pop();
                }

                cout << ans << endl;
        }

        return 0;
}