#include <iostream>
#include <string>

class Baseball{
private:
	//int event;
	int point_count;
	int out_count;
	int runner;

public:
	 Baseball(int p, int o, int r);
	 void singleHit();
	 void homerun();
	 void out();
	 void newInning();
	 int now_point();
	 int now_out();
	~ Baseball();
};

Baseball::Baseball(int p, int o, int r){
	point_count = p;
	out_count = o;
	runner = r;
}

Baseball::~Baseball(){	
}

void Baseball::singleHit(){
	if(runner < 3){
		++runner;
	}else if(runner == 3){
		++point_count;
	}
}

void Baseball::homerun(){
	point_count += runner+1;
	runner = 0;
}

void Baseball::out(){
	++out_count;
}

void Baseball::newInning(){
	point_count = 0;
	out_count = 0;
	runner = 0;
}

int Baseball::now_point(){
	return point_count;
}

int Baseball::now_out(){
	return out_count;
}

int main(){
	int num;
	std::string event;
	Baseball baseball(0,0,0);

	std::cin >> num;

	for(int i=0; i<num; ++i){
		baseball.newInning();

		while(baseball.now_out() < 3){
			std::cin >> event;

			if(event == "HIT"){
				baseball.singleHit();

			}else if(event == "HOMERUN"){
				baseball.homerun();

			}else if(event == "OUT"){
				baseball.out();

			}
		}

		std::cout << baseball.now_point() << std::endl;
	}
	
}