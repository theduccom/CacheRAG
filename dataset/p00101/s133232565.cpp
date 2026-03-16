#include <iostream>
#include <string>
 
int main(void){
    std::string str;
    int N;
    std::cin >> N;
    std::cin.ignore();
    for(int i = 0; i < N; ++i){
        getline(std::cin, str);
        int pos;
        while((pos = str.find("Hoshino")) != -1){
            str.replace(pos, 7, "Hoshina");
        }
        std::cout << str << std::endl;
    }
}