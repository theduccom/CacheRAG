#include <iostream>
#include <string>



int main(void){
	int num;
	std::cin >> num;

	std::string event;
	int out = 0, runner = 0, point = 0;
	for(int i = 0; i < num; ++i){
		while(out < 3){
			std:: cin >> event;

			if(event == "OUT"){
				++out;		
			}else if(event == "HIT"){
				if(runner == 3){
					++point;
				}else{
					++runner;
				}
			}else if(event == "HOMERUN"){
				point += runner + 1;
				runner = 0;
			}
		}
		std::cout << point << std::endl;
		out = 0, runner = 0, point = 0;
	}

	return 0;
}