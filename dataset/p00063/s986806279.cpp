#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    bool flag;
    int cnt=0;

    while(getline(cin,str)){
        flag=true;

        for(int i=0;i<=str.length()/2;i++){
            if(str[i]!=str[str.length()-1-i]){
                flag=false;
                break;
            }
        }

        if(flag) cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}