#include <iostream>
#include <string>

using namespace std;

int main(){
        string s;
        int sum = 0;
        while(cin >> s){ 
                bool flag = true;
                for(int i = 0; i < s.size(); i++){
                        if(s[i] != s[s.size()-1-i]) flag = false;
                }   
                if(flag) sum++;
        }   
        cout << sum << endl;
}