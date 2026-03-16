#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
#define MAX 100000

int main()
{
    string ss;
    getline(cin,ss);
    char temp;
    for(int i= 0;i<ss.length();++i)
    {
        temp = ss[i];
        if('a'<=temp&&temp<='z') temp += ('A'-'a');
        cout << temp;
    }
    cout << endl;

    return 0;
}