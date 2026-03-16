#include <iostream>
#include <string>

class Baseball {
	private:
		int out;
		int runner;
		int point;
		
	public:
		Baseball(){
			out = 0;
			runner = 0;
			point = 0;
		}
		
		int getOut(){
			return out;
		}
		void addOut(){
			++out;
		}
		
		void hit(){
			++runner;
			if(runner == 4){
				++point;
				--runner;
			}
		}
		void homerun(){
			point += runner + 1;
			runner = 0;
		}
		
		int getRunner(){
			return runner;
		}
		
		int getPoint(){
			return point;
		}
};

int main(){
	int inning;
	std::cin >> inning;
	
	for(int i=0; i<inning; ++i){
		Baseball bs;
		
		while(bs.getOut() < 3){
			std::string str;
			std::cin >> str;
			
			if(str == "HIT"){
				bs.hit();
			}
			if(str == "HOMERUN"){
				bs.homerun();
			}
			if(str == "OUT"){
				bs.addOut();
			}
		}
		std::cout << bs.getPoint() << std::endl;
	}
	
	return 0;
}