#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string in_str;
    getline(cin, in_str);
    transform(in_str.begin(), in_str.end(), in_str.begin(), ::toupper);
    cout << in_str << endl;
    return 0;
}