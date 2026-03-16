#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
string input;
inline int op(const string op, int a, int b)
{
    if (op == "+")
        return a + b;
    if (op == "-")
        return a - b;
    if (op == "*")
        return a * b;
    if (op == "/")
        return a / b;
}
inline bool is_all_digit(string in)
{
    for (auto i : in)
    {
        if (!isdigit(i))
            return false;
    }
    return true;
}
vector<string> split(string in)
{
    vector<string> spl;
    int pos = 0;
    if (in[pos] == '-')
    {
        pos++;
        while (pos < in.size())
        {
            if (isdigit(in[pos]))
            {
                pos++;
            }
            else
            {
                break;
            }
        }
        spl.push_back(in.substr(0, pos));
        in.erase(0, pos);
        pos = 0;
    }
    while (pos < in.size())
    {
        if (!isdigit(in[pos]))
        {
            if (pos != 0)
            {
                spl.push_back(in.substr(0, pos));
                in.erase(0, pos);
                pos = 0;
            }
            else
            {
                if (in[0] == '(')
                {
                    int cnt = 1;
                    int r_pos = 1;
                    for (r_pos = 1; r_pos < in.size(); r_pos++)
                    {
                        if (in[r_pos] == '(')
                            cnt++;
                        if (in[r_pos] == ')')
                            cnt--;
                        if (cnt == 0)
                            break;
                    }
                    spl.push_back(in.substr(pos + 1, r_pos - 1));
                    in.erase(0, r_pos + 1);
                    pos = 0;
                    continue;
                }
                else if (in[0] == '+' || in[0] == '-' || in[0] == '*' || in[0] == '/')
                {
                    spl.push_back(in.substr(0, 1));
                    in.erase(0, 1);
                    pos = 0;
                }
            }
        }
        else
        {
            pos++;
        }
    }
    if (in.size() != 0)
        spl.push_back(in);
    return spl;
}
int cal(string &in_str)
{
    auto in = split(in_str);
    while (in.size() == 1)
    {
        if ((in[0][0] == '-' && is_all_digit(in[0].substr(1))) || (is_all_digit(in[0])))
            break;
        in = split(in[0]);
    }
    auto pos = in.begin();
    auto lambda = [&]() {pos--;*pos = to_string(op(*(pos+1),cal(*pos), cal(*(pos + 2))));in.erase(pos + 1, pos + 3); };
    while (in.size() != 1)
    {
        while (pos != in.end())
        {
            if (*pos == "*" || *pos == "/")
                lambda();
            if (in.size() == 1)
                break;
            if (pos != in.end())
                pos++;
        }
        pos = in.begin();
        while (pos != in.end())
        {
            if (*pos == "+" || *pos == "-")
                lambda();
            if (in.size() == 1)
                break;
            if (pos != in.end())
                pos++;
        }
    }
    return (stoi(in[0]));
}
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        cin >> input;
        input.erase(input.end() - 1);
        cout << cal(input) << endl;
    }
    return 0;
}
