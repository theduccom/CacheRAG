#include <iostream>
using namespace std;

string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    int carry = 0;

    for (int i = n1 - 1; i >= 0; i--)
    {
        int sum = ((str1[i] - '0') +
                   (str2[i + diff] - '0') +
                   carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    for (int i = n2 - n1 - 1; i >= 0; i--)
    {
        int sum = ((str2[i] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if (carry)
        str.push_back(carry + '0');

    string s_str = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        s_str.push_back(str[i]);
        str[i] = '\0';
    }

    return s_str;
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (80 < a.length() || 80 < b.length())
        {
            cout << "overflow" << endl;
        }
        else
        {

            string s = findSum(a, b);
            if (80 < s.length())
            {
                cout << "overflow" << endl;
            }
            else
            {
                cout << s << endl;
            }
        }
    }
    return 0;
}

