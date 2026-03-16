#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s1, s2;
        int l1, l2;
        cin >> s1 >> s2;
        l1 = s1.length();
        l2 = s2.length();
        if (l1>80 || l2 > 80)
            cout << "overflow";
        else
        {
            int result[100], r = 0, m = max(l1, l2), t;
            reverse(s1.begin(), s1.end());
            reverse(s2.begin(), s2.end());
            s1.resize(m + 1, '0');
            s2.resize(m + 1, '0');
            for (int j = 0; j < m; j++)
            {
                t = r + s1[j] + s2[j] - 48 * 2;
                result[j] = t % 10;
                r = t / 10;
            }
            if (r == 1)
                result[m++] = 1;
            if (m>80)
                cout << "overflow";
            else
                for (int j = m - 1; j >= 0; j--)
                    cout << result[j];
        }
        cout << endl;
    }
    return 0;
}