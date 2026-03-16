#include <iostream>
#include <stack>
#include <string>
using namespace std;
void f(int);
int main() {
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(islower(str[i])){
            str[i]+='A'-'a';
        }
    }
    cout<<str<<endl;
    return 0;
}