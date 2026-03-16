#include <iostream>

class baseball{
	private : 
	bool firstRunner; //first runnner flag
	bool secondRunner; //second runnner flag
	bool thirdRunner; //third runnner flag

	int score; //inning score
	int outCount; //number of out count 

	public :  
	baseball();

	void doHit();
	void doHomerun();
	void doOut();

	int getOutCount();
	void showScore();
};

baseball::baseball(){
	firstRunner = false; 
	secondRunner = false;
	thirdRunner = false;

	score = 0;
	outCount = 0; 
}

void baseball::doHit() {
	//advance to the next base
	if(thirdRunner == true){
		++score;
		thirdRunner = false;
	}
	if(secondRunner == true){
		thirdRunner = true;
		secondRunner = false;
	}
	if(firstRunner == true){
		secondRunner = true;
	}
	firstRunner = true;
}

void baseball::doHomerun(){
	//advance to the next base
	if(thirdRunner == true){
		++score;
		thirdRunner = false;
	}
	if(secondRunner == true){
		++score;
		secondRunner = false;
	}
	if(firstRunner == true){
		++score;
		firstRunner = false;
	}
	++score;
}

void baseball::doOut(){
	//add out count
	++outCount;
}

int baseball::getOutCount(){
	return outCount;
}

void baseball::showScore(){
	std::cout << score << std::endl;
}


int main(void){
	u_int n = 0; //number of data set
	std::cin >> n; //input number of data set

	baseball game[n]; //make n baseball class

	for(size_t i = 0; i < n; ++i){
		while(game[i].getOutCount() < 3){
			std::string str;
			std::cin >> str; //input event

			if(str == "HIT"){ //judge event
				game[i].doHit();
			}else if(str == "HOMERUN"){
				game[i].doHomerun();
			}else if(str == "OUT"){
				game[i].doOut();
			}else{
				std::cout << "error : wrong strings" << std::endl;
			}
		}
		game[i].showScore(); //output inning score
	}

	return 0;
}