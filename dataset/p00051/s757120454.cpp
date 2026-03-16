#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <cmath>

using namespace std;

int main()
{
    string str;
    vector<int> mx,mn;
    int n;
    int a,b;
    cin >> n;
    while(cin >> str)
    {
        a=0;b=0;
        for(int i=0;i<str.length();++i)
        {
            mn.push_back(str[i]-'0');
        }
        sort( mn.begin(), mn.end() );
        mx = mn;
        sort( mx.begin(), mx.end(), greater<int>() );
        for(int i=0;i<8;++i)
        {
            a += mx[i]*pow(10,i);
            b += mn[i]*pow(10,i);
        }
        cout << b-a << endl;
        str.clear();
        mn.clear();
        mx.clear();
    }
}