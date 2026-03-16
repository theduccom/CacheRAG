#include <iostream>

class Baseball{
private:
	int score,out,runner,inning;
public:
    Baseball();
    ~Baseball()=default;
    void checkEvent(std::string event);
    void hit();
    void homerun();
    void countOut();
    int getInning();
};

Baseball::Baseball(){
	score=0,out=0,runner=0,inning=0;
}

void Baseball::checkEvent(std::string event){
    if(event=="HIT"){
        this->hit();
    }
    else if(event=="OUT"){
        this->countOut();
    }
    else if(event=="HOMERUN"){
        this->homerun();
    }
}

void Baseball::hit(){
	runner<3?++runner:++score;
}
	
void Baseball::countOut(){
	if(out<2){
		++out;
	}
	else{
	std::cout << score << std::endl;
	runner=0,out=0,score=0;++inning;
	}
}
	
void Baseball::homerun(){
	score+=runner+1;
	runner=0;
}	

int Baseball::getInning(){
	return inning;
}

int main() {
	Baseball game;
	int num;
	std::cin >> num;
	while(game.getInning()<num){
		std::string event;
		std::cin >> event;
		game.checkEvent(event);
	}
	return 0;
}