#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int ans = 0;
    string in_str;
    while(getline(cin, in_str))
    {
        int len;
        int center_index;
        if(in_str.size() % 2 == 0)
        {
            len = in_str.size() / 2;
            center_index = len;
        }
        else
        {
            len = in_str.size() / 2 + 1;
            center_index = len - 1;
        }
        string str_left = in_str.substr(0, len);
        string str_right = in_str.substr(center_index, len);
        reverse(str_right.begin(), str_right.end());
        if(str_left == str_right)
        {
            ans++;
        }
        //cout << "left = " <<str_left << " right = "<< str_right << endl;
    }
    cout << ans << endl;
    return 0;
}