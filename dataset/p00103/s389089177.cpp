#include <iostream>
#include <string>

class Baseball{
private:
	int runner; // 0~3: the number of runner
	int out_count; //0~2: out count
	int point;

public:
	Baseball(){
		runner = 0;
		out_count = 0;
		point = 0;
	}

	int judge(std::string event){
		if(event == "HIT"){
			return single_hit();
		}else if(event == "HOMERUN"){
			return home_run();
		}else{
			return out();
		}
	}

	void display(){
		std::cout << point << std::endl;
	}

	int single_hit(){
		(runner == 3) ? ++point : ++runner;
		return 1;
	}

	int home_run(){
		point = point + runner + 1;
		runner = 0;
		return 1;
	}

	int out(){
		if(out_count == 2){
			display();
			return 0;
		}else{
			++out_count;
			return 1;
		}
	}
};

int main(){
	int n; // the number of datasets
	std::cin >> n;

	for(int i = 0; i < n; ++i){
		Baseball inning;
		std::string eve;
		std::cin >> eve;
		while(inning.judge(eve) == 1){
			std::cin >> eve;
		}
	}
	return 0;
}