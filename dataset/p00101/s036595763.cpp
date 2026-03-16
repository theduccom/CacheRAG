#include <iostream>
#include <string>
#include <vector>

int main(){
    int n;
    std::string str;
    std::string fr = "Hoshino";
    std::string to = "Hoshina";
    std::string::size_type pos;
    std::cin >> n;
    std::cin.get();
    
  
        //文字列の読み込み
        while(n > 0 && std::getline(std::cin, str)){
            //"Hoshino"を"Hoshina"に変換
            pos = str.find(fr);
            while(pos != std::string::npos){
                str.replace(pos, fr.size(), to);
                pos = str.find(fr, pos+to.size());
            }
             std::cout << str << std::endl;
            str = "";
            std::cin.clear();
            --n;
        }
}
