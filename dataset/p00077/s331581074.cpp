#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(cin >> s){
        string t;
        t.reserve(100);
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '@'){
                for(int j = 0; j < s[i+1] - '0'; ++j) t.push_back(s[i+2]);
                i += 2;
            } else {
                t.push_back(s[i]);
            }
        }
        cout << t << endl;
    }
}