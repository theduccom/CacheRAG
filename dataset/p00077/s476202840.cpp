#include <iostream>
#include <string>

using namespace std;

int main(){
        string s;
        while(cin >> s){ 
                for(int i = 0; i < s.length(); i++){
                        if(s.at(i) == '@'){
                                for(int j = 0; j < s.at(i+1)-'0'; j++){
                                        cout << s.at(i+2);
                                }   
                                i += 2;
                        }else cout << s.at(i);
                }   
                cout << endl;
        }   
}