#include <cstdio>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int s;
    char t[10];
    map<string, int> res;
    while( scanf( "%d,%s", &s, t ) != -1 ) {
        ++res[t];
    }

    cout << res["A"] << endl
         << res["B"] << endl
         << res["AB"] << endl
         << res["O"] << endl;
}