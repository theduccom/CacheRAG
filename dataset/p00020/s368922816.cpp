#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int len;
    
    getline(cin, str);
    
    len = str.size();
    for (int i = 0; i < len; i++){
        if ('a' <= str[i] && str[i] <= 'z'){
            str[i] = str[i] - ('a' - 'A');
        }
    }
    
    cout << str << endl;
}