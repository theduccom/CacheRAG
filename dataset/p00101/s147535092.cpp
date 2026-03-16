#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cin >> n;
    cin.get();
    string str;

    for(int i=1; i<=n; i++){
        getline(cin, str);
        while(str.find("Hoshino") != string::npos){
            str.at(str.find("Hoshino") + 6) = 'a';
        }
        cout << str << endl;
    }

    return 0;
}