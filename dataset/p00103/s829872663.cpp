#include <iostream>
#include <string>

class Baseball{
private:
	int first;
	int second;
	int third;
	int score;
	int count;
public:
	Baseball(){
		first=0;
		second=0;
		third=0;
		score=0;
		count=0;
	}
	int getScore(){
		return score;
	}
	void hit(){
		score+=third;
		third=second;
		second=first;
		first=1;
	}
	void homerun(){
		score+=third+second+first+1;
		first=0;
		second=0;
		third=0;
	}
	void out(){
		count++;
	}
	int getCount(){
		return count;
	}
};

int main(){
	int inning;
	std::cin >> inning;

	for(int i=0;i<inning;i++){
		Baseball attack;
		std::string result;
		while(attack.getCount()<3){
			std::cin >> result;

			if(result == "HIT"){
				attack.hit();
			} else if(result == "HOMERUN"){
				attack.homerun();
			} else if(result == "OUT"){
				attack.out();
			}
		}
		std::cout << attack.getScore() <<std::endl;
	}

    return 0;
}
