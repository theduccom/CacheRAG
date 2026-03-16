#include <iostream>
#include <array>

class Baseball{
	private:
	int out_count;
	std::array<int, 4> runner; 	//first second third home
								//runner:1 no:0 home:point
	
	public:
	Baseball(){
		out_count = 0;
		for(int i=0; i<4; ++i)
			runner[i] = 0;
	}
	
	void ining(){
		while(out_count != 3){
			std::string str;
			std::cin >> str;
		
			if(str == "HIT") hit();
			else if(str == "OUT") out();
			else if(str == "HOMERUN") homerun();
		}
		
		std::cout << runner[3] << std::endl;
		return;
	}
	
	void hit(){
		for(int i=0; i<4; ++i){
			if(runner[i] == 0){
				runner[i] = 1;
				return;
			}
			if(i == 3)
				++runner[i];
		}
	}
	
	void out(){
		++out_count;
	}
	
	void homerun(){
		for(int i=0; i<3; ++i){
			if(runner[i] == 1){
				++runner[3];
				runner[i] = 0;
			}
		}
		++runner[3];
	}
};

int main(){
	int n;
	std::cin >> n;
	
	for(int k=0; k<n; ++k){
		Baseball game;
		game.ining();
	}
	return 0;
}