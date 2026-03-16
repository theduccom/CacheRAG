#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str;
int convert(char a){
    if(a == 'I') return 1;
    else if(a == 'V') return 5;
    else if(a == 'X') return 10;
    else if(a == 'L') return 50;
    else if(a == 'C') return 100;
    else if(a == 'D') return 500;
    else return 1000;
}
int main(){
    bool state=false;
    int a, b;
    int ans;
    int i;
    while(cin >> str){
        ans = 0;
        for(i=1;i<str.size();i++){
            a = convert(str[i-1]);
            b = convert(str[i]);
            if(a < b){
                ans+=b-a;
                i++;
            }else{
                ans+=a;
            }
        }
        if(i==str.size()){
            ans += convert(str[i-1]);
        }
        cout << ans << endl;
    }
}