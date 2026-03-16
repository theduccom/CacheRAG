#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    getline(cin, s);

    for(int i = 0; i < s.size();)
    {
        string temp = s.substr(i, 5);
        if(temp == "apple")
        {
            temp = "peach";
            for(int j = 0; j < 5; ++j) {
                s[i + j] = temp[j];
            }
            i += 5;
        }
        else if(temp == "peach")
        {
            temp = "apple";
            for(int j = 0; j < 5; ++j) {
                s[i + j] = temp[j];
            }
            i += 5;
        }
        else
        {
            ++i;
        }
    }

    cout << s << endl;

}