#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        string str;
        int num1, num2;

        cin >> str;

        sort(str.begin(), str.end());
        num1 = atoi(str.c_str());

        reverse(str.begin(), str.end());
        num2 = atoi(str.c_str());

        cout << num2 - num1 << endl;
    }

    return 0;
}