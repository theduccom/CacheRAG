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
    char comma;
    string blood;
    map<string, int> btype;
    btype["A"] = 0;
    btype["B"] = 0;
    btype["AB"] = 0;
    btype["O"] = 0;
    while(cin >> a >> comma >> blood)
    {
        ++btype[blood];
    }
    cout << btype["A"] << endl;
    cout << btype["B"] << endl;
    cout << btype["AB"] << endl;
    cout << btype["O"] << endl;
}