#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

int main(){
    string s;
    while(getline(cin,s)){
        rep(i,s.size()){
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
}