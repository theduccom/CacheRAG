#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1;
    while (cin >> s1){
        for (int n = 0; n < s1.size(); n++){
            if (s1[n] == '@'){
                for (int m = s1[n + 1]; m > '0'; m--){
                    cout << s1[n + 2];
                }
                n += 2;
            }
            else{
                cout << s1[n];
            }
        }
        cout << endl;
    }
    return 0;
}

