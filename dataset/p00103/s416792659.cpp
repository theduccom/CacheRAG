#include <iostream>
#include <string>

class Baseball{

private:
	int point;
	int out;
	int base;   //0:no runner 1:runner
				//home,third,second,first

public:

	Baseball(int fir_point, int fir_out, int fir_base){
		point = fir_point;
		out = fir_out;
		base = fir_base;
	}

	int get_point(){
		return point;
	}

	int get_out(){
		return out;
	}

	void hit(){
		base = (base * 10) + 1;
		
		if(base >= 1000){
			base -= 1000;
			point += 1;
		}
	}

	void home_run(){
		point += 1;
		for(int i = base; i > 0; i /= 10){
			point += i%10;
		}
		base = 0;
	}

	void add_out(){
		out += 1;
	}
};	

int main(){

	int N;
	std::cin >> N;

	for(int i = 0; i < N; ++i){

		Baseball baseball(0, 0, 0);

		while(true){
			std::string str;
			std::cin >> str;

			if(str == "HIT")
				baseball.hit();
			
			else if(str == "HOMERUN")
				baseball.home_run();

			else if(str == "OUT"){
				baseball.add_out();
			
				if(baseball.get_out() == 3)
					break;
				
			}
		}
	std::cout << baseball.get_point() << std::endl;
	}

	return 0;
}