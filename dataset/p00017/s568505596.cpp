#include <cmath>
#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>
#include <set>
#include <stack>
#include <queue>
#include <vector>
#include <sstream>
 
 
using namespace std;
 
 
 
string shift_str(string str, int num)
{
    int ascii;
    string ret;
     
    for (int i=0; i<str.length(); i++)
    {
        ascii = str[i];
        //cout << "ascii = " << ascii << endl;
         
        if (!('a' <= ascii && ascii <= 'z'))
        {
            ret += ascii;
        } else {
            ascii += num;
            if (ascii > 'z')
            {
                ret += ((ascii - 'z') + 'a' - 1);
            } else {
                ret += ascii;
            }
        }
         
    }
     
    return ret;
}
//?°?????????±????????´?????????num??§?????¢???????????????
 
 
int main()
{
    string str;
    string ret;
     
    while (getline(cin, str))
    {
        for (int i=1; i<=26; i++)
        {
            ret = shift_str(str, i);
            if ( ret.find("the", 0) != -1
                || ret.find("this", 0) != -1
                || ret.find("that", 0) != -1 )
            {
                cout << ret << endl;
                break;
            }
        }
    }
     
    return 0;
}