#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int t=0;
    getline(cin,str);

    for(int i=0;i<str.size();i++){
        if("peach"==str.substr(i,5)){
            i += 4;
            cout<<"apple";
        }
        else if("apple"==str.substr(i,5)){
            i += 4;
            cout<<"peach";
        }
        else cout<<str[i];
    }
    cout<<endl;
}