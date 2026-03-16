#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const int WEIGHTS[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

int main()
{
    int in_data;
    while(cin >> in_data)
    {
        int gram_num = 0;
        bool is_used[10] = {};
        stringstream ss;
        string ans;
        for(int i=9; i>=0; i--)
        {
            if(gram_num + WEIGHTS[i] <= in_data)
            {
                gram_num += WEIGHTS[i];
                is_used[i] = true;
            }
        }
        for(int i=0; i<10; i++)
        {
            if(is_used[i])
            {
                ss << std::to_string(WEIGHTS[i]) <<  " ";
            }
        }
        ans = ss.str();
        ans.pop_back();
        cout << ans << endl;
    }
    return 0;
}

