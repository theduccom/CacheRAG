#include <bits/stdc++.h>

using namespace std;

int main(){
    string input;
    while(cin >> input){
        int ans = 0;
        for(int i=0; i < input.size(); i++){
            string n = input.substr(i, 1);
            if(n == "I") ans++;
            else if(n == "V") ans+=5;
            else if(n == "X") ans+=10;
            else if(n == "L") ans+=50;
            else if(n == "C") ans+=100;
            else if(n == "D") ans+=500;
            else if(n == "M") ans+=1000;
            if(i != 0){
                if(input.substr(i-1, 1) == "I"){
                    if(n == "V" || n == "X") ans-=2;
                }
                else if(input.substr(i-1, 1) == "X"){
                    if(n == "L" || n == "C") ans-=20;
                }
                else if(input.substr(i-1, 1) == "C"){
                    if(n == "D" || n == "M") ans-=200;
                }
            }
        }
        cout << ans << endl;
    }
}