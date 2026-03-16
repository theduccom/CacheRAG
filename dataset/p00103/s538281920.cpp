#include <iostream>
#include <string>
#include <bitset>
  
class Baseball{
    u_int score, out_count;
    std::bitset<4> runners; 
public:
    Baseball() : score(), out_count(){} //initializer list
    ~Baseball() = default;
    void hit();
    void homerun();
    void out() {++out_count;}
    u_int get_score() {return score;}
    u_int get_out() {return out_count;}
};
 
void Baseball::hit(){
    runners <<= 1; //shift
	runners.set(0); //set runner
    if(runners.test(3)){
        ++score;
        runners.reset(3);
    }
}
 
void Baseball::homerun(){
    score += runners.count() + 1;
    runners.reset();
}
 
int main(){
    u_int inning;
    std::cin >> inning;
    for(u_int i = 0; i < inning; ++i){
        Baseball game;
        while(game.get_out() != 3){
            std::string event;
            std::cin >> event;
            if(event == "HIT"){
                game.hit();
            }
            else if(event == "HOMERUN"){
                game.homerun();
            }
            else if(event == "OUT"){
                game.out();
            }
        }
        std::cout << game.get_score() << std::endl;
    }
    return 0;
}