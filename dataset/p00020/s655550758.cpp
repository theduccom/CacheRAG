#include <iostream>

int main(int argc, const char * argv[]) {
    std::string line;
    while(getline(std::cin,line)){
        for(int i = 0;i<line.length();i++){
            if ( line[i]>='a' && line[i]<='z'){
                line[i] = line[i] + ('A' - 'a');
            }
        }
        std::cout << line << std::endl;
        
    }
        }