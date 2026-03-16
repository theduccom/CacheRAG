#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){

    int dataSetNum;
    std::cin >> dataSetNum;

    std::vector< std::string > str;
    str.resize(dataSetNum);
    std::cin.ignore();

    //input 
    for(int i = 0; i < dataSetNum; ++i){
        //input
        std::string tmp;
        getline(std::cin, tmp);
        str[i] = tmp;
    }

    //replace
    for(int i = 0; i < dataSetNum; ++i){
    	const std::string tmp("Hoshino");
        auto pos = str[i].find(tmp);
        while(pos != std::string::npos){
        	str[i].replace( pos, 7, "Hoshina" );
        	pos = str[i].find(tmp, pos + 7);
        }
    }
    
    //output
    	std::for_each(str.begin() , str.end(),
    [](std::string x) { std::cout << x << std::endl; } );

    return 0;
}