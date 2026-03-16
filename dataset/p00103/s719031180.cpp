#include <iostream>
#include <string>
#include <fstream>

int main(){
    int hit = 0, out= 0, score = 0, data_set_num;
    std::string event, str;
    std::cin >> data_set_num;
    std::cin.ignore();

    while(data_set_num){
        std::cin >> event;
        if(event == "HIT"){
            ++hit;
            if(hit == 4){
                ++score;
                --hit;
            }
        }else if(event == "HOMERUN"){
            score += (hit + 1);
            hit = 0;
        }else if(event == "OUT"){
            ++out;
        }

        if(out == 3){
            std::cout << score << std::endl;
            hit = 0;
            score = 0;
            out = 0;
            --data_set_num;
        }
    }

    return 0;
}