#include <sstream>
#include <iostream>
#include <array>
#include <algorithm>

int main(){
    int line_num = 0;
    std :: string sentence, replaced = "Hoshino", replacing = "Hoshina";
    std :: cin >> line_num;
    std :: getline(std :: cin, sentence);
    for(int i = 0;i < line_num;i++){
        std :: getline(std :: cin, sentence);
        std::string::size_type pos = 0;
        while ((pos = sentence.find(replaced, pos)) != std::string::npos) {
            sentence.replace(pos, replaced.length(), replacing);
            pos += replaced.length();
        }
        std :: cout << sentence << std :: endl;
    }
}
