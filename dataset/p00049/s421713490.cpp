#include <iostream>
#include <string>

using namespace std;

int stoi(string s){ 
        if(s == "A"){
                return 0;
        }   
        if(s == "B"){
                return 1;
        }   
        if(s == "O"){
                return 3;
        }else{
                return 2;
        }   
}

int main(){
        int type[4] = {0};
        int a;
        char b;
        string c;
        while(cin >> a){ 
                cin >> b >> c;
                type[stoi(c)]++;
        }   
        int i = 0;
        while(i < 4){ 
                cout << type[i++] << endl;
        }   
}