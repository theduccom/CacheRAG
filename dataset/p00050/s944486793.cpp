#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s;
    string tmp1;
    string tmp2;
    getline(cin,s);
    tmp1 = s;
    tmp2 = s;
    while(tmp1.find("apple") != string::npos){
        s.replace(tmp1.find("apple"),5,"peach");
        tmp1.replace(tmp1.find("apple"),5,"peach");
    }
    while(tmp2.find("peach") != string::npos){
        s.replace(tmp2.find("peach"),5,"apple");
        tmp2.replace(tmp2.find("peach"),5,"apple");
    }
    cout << s << endl;
}