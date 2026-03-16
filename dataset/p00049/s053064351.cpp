#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char c;
    string bt;
    int bt_a=0,bt_b=0,bt_o=0,bt_ab=0;

    while(cin>>n){
        cin>>c;
        getline(cin,bt);

        if(bt=="A"){
            bt_a++;
        }else if(bt=="B"){
            bt_b++;
        }else if(bt=="O"){
            bt_o++;
        }else{
            bt_ab++;
        }
    }

    cout<<bt_a<<endl;
    cout<<bt_b<<endl;
    cout<<bt_ab<<endl;
    cout<<bt_o<<endl;
}