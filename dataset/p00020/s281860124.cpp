#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char ch;
    while(cin.get(ch)) {
        if(islower(ch)) ch=toupper(ch);
        cout.put(ch);
    }
    return 0;
}