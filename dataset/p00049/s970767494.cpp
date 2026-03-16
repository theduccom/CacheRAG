#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    char c;
    string b;
    map<string, int> cnt;
    while (cin >> a >> c >> b) {
        cnt[b]++;
    }
    cout << cnt["A"] << endl;
    cout << cnt["B"] << endl;
    cout << cnt["AB"] << endl;
    cout << cnt["O"] << endl;
    return 0;
}