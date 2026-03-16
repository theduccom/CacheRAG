#include <bits/stdc++.h>
using namespace std;
//    std::sort(a.begin(), a.end(), std::greater<int>() );
#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG true

/*
std::vector<std::string> split(const std::string &input, char delimiter)
{
    std::istringstream stream(input);

    std::string field;
    std::vector<std::string> result;
    while (std::getline(stream, field, delimiter))
    {
        result.push_back(field);
    }
    return result;
}
*/

int main()
{
    string a;
    while (cin >> a)
    {

        int ans = 0;
        string b = "IVXLCDM";
        int c[] = {1, 5, 10, 50, 100, 500, 1000};
        int pre = 0;
        rep(i, a.size())
        {
            rep(j, b.size()) if (a[i] == b[j])
            {
                if (c[j] <= pre)
                {
                    ans += pre;
                    pre = c[j];
                }
                else
                {
                    ans -= pre;
                    pre = c[j];
                }
                break;
            }
        }
        ans += pre;
        cout << ans << endl;
        if (cin.eof())
        break;
    }
    return 0;
}