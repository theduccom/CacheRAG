#include    <iostream>
#include    <cstdio>
#include    <string>
#include    <map>

using namespace std;

int main() {
    map<string, int> blood;
    int id;
    char _t[2];
    string type;

    while(~scanf("%d,%s", &id, _t)) {
        type = _t;
        blood[type]++;
    }
    cout << blood["A"] << endl;
    cout << blood["B"] << endl;
    cout << blood["AB"] << endl;
    cout << blood["O"] << endl;

    return 0;
}
