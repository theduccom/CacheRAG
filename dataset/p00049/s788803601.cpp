#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    string n;
    map<string, int> cnt;
    
    while(getline(cin, n, ',')) {
        string blood;
        cin >> blood;
        cnt[blood]++;
    }

    cout << cnt["A"] << endl;
    cout << cnt["B"] << endl;
    cout << cnt["AB"] << endl;
    cout << cnt["O"] << endl;

    return 0;
}