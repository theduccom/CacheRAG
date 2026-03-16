#include <iostream>
#include <string>

class Baseball{
	private:
	int out;
	int runner;
	int point;

	public:
	void init();
	int get_out();
	int get_point();
	void event_hit();
	void event_homerun();
	void event_out();
};

void Baseball::init(){
	out = 0;
	runner = 0;
	point = 0;
}

int Baseball::get_out(){
	return out;	
}

int Baseball::get_point(){
	return point;
}

void Baseball::event_hit(){
	if(runner == 3){
		++point;
	}else{
		++runner;
	}
}

void Baseball::event_homerun(){
	point += ++runner;
	runner = 0;
}

void Baseball::event_out(){
	++out;
}

int main(void){
	int num;
	std::cin >> num;

	std::string event;
	Baseball base;
	base.init();
	for(int i = 0; i < num; ++i){
		while(base.get_out() < 3){
			std:: cin >> event;

			if(event == "OUT"){
				base.event_out();		
			}else if(event == "HIT"){
				base.event_hit();
			}else if(event == "HOMERUN"){
				base.event_homerun();
			}
		}
		std::cout << base.get_point() << std::endl;
		base.init();
	}
	return 0;
}