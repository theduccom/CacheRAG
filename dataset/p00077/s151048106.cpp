#include <iostream>
using namespace std;
int main(void){
    string s,r;
    while(cin >> s){
        r.clear();
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '@'){
                for(int z = 0; z < s[i+1] - '0'; z++)
                    r += s[i+2];
                i += 2;
            }
            else{
                r += s[i];
            }
        }
        cout << r << endl;
    }
}
