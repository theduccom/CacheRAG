#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cin>>n;
    cin.ignore();

    while(n--){
        string str;
        getline(cin,str);

        for(int i=0;i+6<str.length();i++){
            if(str.substr(i,7)=="Hoshino"){
                str.replace(i,7,"Hoshina");
            }
        }

        cout<<str<<endl;
    }

    return 0;
}