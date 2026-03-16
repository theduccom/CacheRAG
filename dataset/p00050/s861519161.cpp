#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int n = s.length();
    string ans = "";
    for(int i=0; i<n; i++){
        if(i+4 < n && s.substr(i, 5) == "apple"){
            ans += "peach";
            i += 4;
        }else if(i+4 < n && s.substr(i, 5) == "peach"){
            ans += "apple";
            i += 4;
        }else{
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}

