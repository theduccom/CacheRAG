#include<iostream>
#include<string>
using namespace std;
int main(){
    int cnt = 0;
    string str;
    while(cin >> str){
        bool flg = 0;
        for(int i = 0; i < (str.size()+1)/2; i++){
            if(str[i] != str[str.size()-i-1]){
                flg = 1;
                break;
            }
        }
        if(!flg)cnt++;
    }
    cout << cnt << endl;
    return 0;
}