#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int n, num1[101], num2[101], num3[102];

    cin >> n;

    for(int i = 0; i < n; ++i){

        memset(num1, 0, sizeof(num1));
        memset(num2, 0, sizeof(num2));
        memset(num3, 0, sizeof(num3));

        cin >> s;

        for(int i = 0, len = s.size(); i < len; ++i){
            num1[i] = s[len - 1 - i] - '0';
        }

        cin >> s;

        for(int i = 0, len = s.size(); i < len; ++i){
            num2[i] = s[len - 1 - i] - '0';
        }

        for(int i = 0, num; i < 101; ++i){
            num = num1[i] + num2[i] + num3[i];
            num3[i] = num % 10;
            num3[i + 1] = num / 10;
        }

        int ldigit = 0;
        for(int i = 101; i >= 0; i--){
            if(num3[i] != 0){
                ldigit = i;
                break;
            }
        }

        if((ldigit + 1) > 80){
            cout << "overflow" << endl;
        } else {
            for(int i = ldigit; i >= 0; i--){
                cout << num3[i];
            }
            cout << endl;
        }

    }

}