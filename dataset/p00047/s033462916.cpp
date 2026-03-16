#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    char x, y;
    char comma;
    char current='A';
    while(cin >> x >> comma >> y)
    {
        if(x == current) swap(y, current);
        else if(y == current) swap(x, current);
    }
    cout << current << endl;
}