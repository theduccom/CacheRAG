#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main()
{
    int a;
    string str;
    getline(cin,str);
    while((a=str.find("apple"))!=string::npos)
    {
        str[a]='t';
        str[a+1]='t';
        str[a+2]='t';
        str[a+3]='t';
        str[a+4]='t';
    }
    while((a=str.find("peach"))!=string::npos)
    {
        str[a]='a';
        str[a+1]='p';
        str[a+2]='p';
        str[a+3]='l';
        str[a+4]='e';
    }
    while((a=str.find("ttttt"))!=string::npos)
    {
        str[a]='p';
        str[a+1]='e';
        str[a+2]='a';
        str[a+3]='c';
        str[a+4]='h';
    }
    cout << str << endl;
}