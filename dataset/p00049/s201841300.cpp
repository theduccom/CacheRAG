#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> blood;
    char ch;
    int tmp;
    string str;

    while (cin >> tmp >> ch >> str) {
        blood[str]++;
    }
    
    cout << blood["A"] << '\n' << blood["B"] << '\n'
         << blood["AB"] << '\n' << blood["O"] << endl;

    return 0;
}