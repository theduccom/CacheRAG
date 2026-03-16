#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string check = "Hoshino";
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        string str; 
        if(i == 0) cin.ignore();
        getline(cin, str);
        if( str.length() < 7) {
            cout << str << endl;
            continue;
        }
        for (int j = 0; j < str.length()-6; j++) {
            for (int k = 0; k < 7; k++) {
                //printf("%c %c\n", check[k], str[j+k]);
                if (check[k] == str[j+k] && k < 6) continue;
                else if (check[k] == str[j+k] && k == 6) {
                    str[j+k] = 'a';
                } else break;
            }
        }
        cout << str << endl;
    }
    return 0;
}