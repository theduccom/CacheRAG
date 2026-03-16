#include <iostream>
#include <string>

int rom2int(const char c){
    switch(c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
}

int rom2int(const std::string s){
    int r = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(rom2int(s[i]) < rom2int(s[i+1])){
            r -= rom2int(s[i]);
        }
        else{
            r += rom2int(s[i]);
        }
    }
    r += rom2int(s[s.size()-1]);
    return r;
}

int main(){
    std::string s;
    while(std::cin >> s){
        std::cout << rom2int(s) << std::endl;
    }
}