#include <iostream>
#include <string>
#include <cstdio>
#include <cctype>
using namespace std;

int main(){
    char c='a';
    string s;
    while(c=getchar(), isprint(c)) s += c;
    size_t p;
    string res;
    {
        while(p=s.find("peach"), p!=string::npos){
            res += s.substr(0,p) + "@@@@@";
            s = s.substr(p+5);
        }
        s = res+s, res = "";
    }
    {
        while(p=s.find("apple"), p!=string::npos){
            res += s.substr(0,p) + "peach";
            s = s.substr(p+5);
        }
        s = res+s, res = "";
    }
    {
        while(p=s.find("@@@@@"), p!=string::npos){
            res += s.substr(0,p) + "apple";
            s = s.substr(p+5);
        }
        s = res+s, res = "";
    }
    cout << s << endl;
}