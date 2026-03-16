#include <iostream>
#include <string>

class baseball{
    private:
    int runner; //number of runner
    int score; //score
    int out_count; //counter of out
    int third_base; //runner is or not
  
    public:
    void initial();
    int getScore();
    int getOutCount();
    void singleHit_1();
    void singleHit_2();
    void homerun();
    void out();
    
};

//initialize
void baseball::initial(){
    runner = 0;
    score = 0;
    out_count = 0;
    third_base = 0;
}

int baseball::getScore(){
    return score;
}

int baseball::getOutCount(){
    return out_count;
}

/*
update runner
 */
void baseball::singleHit_1(){
    if(runner < 3){
        ++runner;
    }
}

/*
increment of score
 */
void baseball::singleHit_2(){
    ++score;
}

/*
clear runner
and
add {(number of runner) + 1} to score
 */
void baseball::homerun(){
    score = score + (runner + 1);
    runner = 0;
}

/*
increment of out_count
 */
void baseball::out(){
    ++out_count;
}

int main(void){
    baseball bb;

    int n;
    std::cin >> n;

    std::string str;
    int count = 0; //counter of hit
    
    bb.initial();
    for(int i = 0; i < n; i++){
        while(bb.getOutCount() < 3){
	    std::cin >> str;
	    if(str == "HIT"){
	        ++count;
		if(count < 4){ //runner is less than 3
		    bb.singleHit_1();
		} else if(count >= 4){ //runner is 3
		    bb.singleHit_2();
		}
	    } else if(str == "HOMERUN"){
	        bb.homerun();
		count = 0;
	    } else if(str == "OUT"){
	        bb.out();
	    }
	}
	std::cout << bb.getScore() << std::endl;
	bb.initial();
	count = 0;
    }
    
    return 0;
}