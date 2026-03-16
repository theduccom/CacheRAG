#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const int DIGITS[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};

int main()
{
    vector<int> nums;
    nums.resize(8);
    string in_str;
    getline(cin, in_str);
    while(getline(cin, in_str))
    {
        int max_value = 0;
        int min_value = 0;
        for(int j=0; j<8; j++)
        {
            string tmp = in_str.substr(j, 1);
            nums[j] = stoi(tmp);
        }
        std::sort(nums.begin(), nums.end());
        for(int j=0; j<8; j++)
        {
            min_value += nums[j] * DIGITS[7-j]; 
            max_value += nums[j] * DIGITS[j];
        }
        cout << max_value - min_value << endl;
    }
    return 0;
}
