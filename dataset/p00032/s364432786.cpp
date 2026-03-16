#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

bool isRectangle(int a, int b, int c);
bool isLozenge(int a, int b);

int main()
{
    int a;
    int b;
    int c;
    int rect_num = 0;
    int loze_num = 0;
    string in_str;
    while(getline(cin, in_str))
    {
        sscanf(in_str.c_str(),"%d,%d,%d",&a,&b,&c);
        if(isRectangle(a, b, c))
        {
            rect_num++;
        }
        if(isLozenge(a, b))
        {
            loze_num++;
        }
    }
    cout << rect_num << endl;
    cout << loze_num << endl;
    return 0;
}

bool isRectangle(int a, int b, int c)
{
    if(a * a + b * b == c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isLozenge(int a, int b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

