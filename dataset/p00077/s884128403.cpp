#include <iostream>
using namespace std;

int main(){
    string str;

    while(cin >> str){
        string result;
        for(int i=0; i<str.size(); i++){
            if(str.at(i) == '@'){
                int n = str.at(i+1) - '0';
                for(int j=1; j<=n; j++){
                    result += str.at(i+2);
                }
                i += 2;
            }else{
                result += str.at(i);
            }
        }
        cout << result << endl;
    }

    return 0;
}