#include<iostream>
using namespace std;

string decy(string s,int k) {
    string res = "";
    for(int i=0; i<s.length(); ++i) {
        if(s[i] >= 'a' && s[i] <= 'z') res += string(1,(s[i]-'a'+k)%26+'a');
        else res += string(1, s[i]);
    }
    return res;
}

bool isvalid(string s) {
    if(s.find("this") != string::npos || s.find("that") != string::npos
       || s.find("the") != string::npos) return true;
    return false;
}

int main() {
    string s;
    while(getline(cin,s)) {
        for(int i=0; i<=25; ++i) {
            s = decy(s,1);
            if(isvalid(s)) {
                cout<<s<<endl;
                break;
            }
        }
    }
}