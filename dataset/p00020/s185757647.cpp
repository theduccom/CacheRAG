#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


using namespace std;

void Solution()
{
    string s;
    
    getline(cin, s); // ensure the last char by "enter"
    
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    cout << s << endl;
    
    return;
}

int main()
{
    Solution();
    return 0;
}