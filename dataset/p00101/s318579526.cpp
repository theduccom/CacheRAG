#include <iostream>
#include <string>
#include <fstream>

int main(){

    int data_set_num;
    std::string str;
    std::string from = "Hoshino";
    std::string to = "Hoshina";
    std::getline(std::cin,str);
    sscanf(str.c_str(),"%d ",&data_set_num);

    while(data_set_num--){
        std::getline(std::cin,str);
        std::string::size_type pos = str.find(from);
        while(pos != std::string::npos){
            str.replace(pos, from.size(), to);
            pos = str.find(from, pos + to.size());
        }
        std::cout << str << std::endl;
    }

    return 0;
}