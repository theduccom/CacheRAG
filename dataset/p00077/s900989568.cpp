#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    string s;
    while(cin>>s) {
        for(int i=0; i<(int)s.length(); i++) {
            if(s[i] == '@'){
                for(int j=0; j < (s[i+1]-'0'); j++)
                    putchar(s[i+2]);
                    i += 2;
            } else {
                putchar(s[i]);
            }
        }
        puts("");
    }

    return 0;
}