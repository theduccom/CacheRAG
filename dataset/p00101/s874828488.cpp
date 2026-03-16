#include <iostream>
#include <string>

int main(){
    int n; //dataset number
    std::string before = "Hoshino";
    std::string after = "Hoshina";

    std::cin >> n;
    std::cin.ignore();
    
    for(int i = 0; i < n; ++i){
        std::string str;
        std::getline(std::cin, str);
        std::string::size_type pos = str.find(before);
        while(pos != std::string::npos){
            str.replace(pos, before.size(), after);
            pos = str.find(before, pos + after.size());
        }
	std::cout << str << std::endl;

    }
    return 0;
}