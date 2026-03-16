#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    int cnt = 0;
    while(cin >>input){
        bool okflag = true;
        for(int i = 0; i < input.size() / 2; i++){
            if(input[i] != input[input.size() - 1 - i]){
                okflag = false;
                break;
            }
        }
        if(okflag) cnt++;
    }
    cout <<cnt <<endl;
    return 0;
}