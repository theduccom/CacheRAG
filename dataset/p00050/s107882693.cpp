#include <iostream>
#include <string>
using namespace std;

int main(){
    unsigned int a_pos=0,p_pos=0;
    string sent;

    getline(cin,sent);

    for(int i=0;i+4<sent.length();i++){
        if(sent.substr(i,5) == "apple"){
            sent.replace(i,5,"peach");
        }else if(sent.substr(i,5) == "peach"){
            sent.replace(i,5,"apple");
        }
    }

    cout<<sent<<endl;
    return 0;
}