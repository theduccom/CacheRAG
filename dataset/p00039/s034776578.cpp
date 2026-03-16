#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<cstring>
#include<cstdio>
using namespace std;

const int ROMA = 256;
int NUM[ROMA];

int main()
{
    NUM['I'] = 1;
    NUM['V'] = 5;
    NUM['X'] = 10;
    NUM['L'] = 50;
    NUM['C'] = 100;
    NUM['D'] = 500;
    NUM['M'] = 1000;
    string s;
    while(cin >> s)
    {
        int ans = 0;
        for(int i = 0;i < s.length() - 1; i++)
        {
            if(NUM[ s[i]] >= NUM[ s[i+1]] ) ans += NUM[ s[i]];
            else ans -= NUM[ s[i]];
        }
        ans += NUM[s[s.length() - 1]];

        cout << ans << endl;

    }
    return 0;
}