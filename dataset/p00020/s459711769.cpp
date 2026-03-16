#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstdlib>
 
using namespace std;
 
char ToUpper(char cX) { return toupper(cX); }
 
int main()
{
    string str;
 
    while (getline(cin, str, '\n')) {
        transform(str.begin(), str.end(), str.begin(), ToUpper);
        cout << str << endl;
    }
 
    return 0;
}