#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

bool match(string s, int id, string p){ 
        if(id+p.length()-1 < s.length()){
                bool flag = true;
                for(int i = 0; i < p.length(); i++){
                        flag &= p.at(i) == s.at(i+id);
                }   
                return flag;
        }   
        return false;
}
void change(string &s, int id, string p){ 
        for(int i = 0; i < p.length(); i++){
                s[id+i] = p[i];
        }   
}
int main(){
        string s;
        char c[1000];
        cin.getline(c, 1000);
        s = c;
        for(int i = 0; i < s.length(); i++){
                if(match(s, i, "apple")){
                        change(s, i, "peach");
                }else if(match(s, i, "peach")){
                        change(s, i, "apple");
                }   
        }   
        cout << s << endl;
}