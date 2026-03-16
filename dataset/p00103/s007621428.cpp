#include <iostream>
#include <string>
#include <array>

class Baseball {

	std::array<bool, 3> base;//base[0]:first, base[1]:second, base[2]:third
	int point,outcount,inning;

public:
	/*construtor*/
	Baseball(int ing) {
		for (int i = 0; i < (int)base.size(); ++i){
			base[i] = false;
		}
		point = 0;
		outcount = 0;
		inning = ing;
	}

	int inning_result(std::string res);

private:
	void clear();
	void hit();
	void homerun();
	void out();
};

/*Clear method*/
void Baseball::clear() {

	for (int i = 0; i < (int)base.size(); ++i){
		base[i] = false;
	}

	point = 0;
	outcount = 0;

}

/*The case of hit*/
void Baseball::hit() {

	if (base[2] == true) {
		++point;
		base[2] = false;
	}

	if (base[1] == true){
		base[2] = true;
		base[1] = false;
	}

	if (base[0] == true) {
		base[1] = true;
		base[0] = false;
	}

	base[0] = true;

}

/*The case of homerun*/
void Baseball::homerun() {

	++point;//butter runner point

	for (int i = 0; i < (int)base.size(); ++i){
		if (base[i] == true){
			++point;
		}
		base[i] = false;
	}

}

/*The case of out*/
void Baseball::out() {

	++outcount;

	if (outcount == 3){
		std::cout << point << std::endl;
		clear();
		--inning;
	}

}

/*Judgement of inning*/
int Baseball::inning_result(std::string res) {

	if (res == "HIT") {
		hit();
	}
	else if (res == "HOMERUN") {
		homerun();
	}
	else if (res == "OUT") {
		out();
	}
	else {
		std::perror(NULL);
	}

	return inning;
}

int main() {

	int n;//the number of ining
	std::string result;

	std::cin >> n;

	Baseball game(n);

	while (n > 0) {
		std::cin >> result;
		n = game.inning_result(result);
	}

	return 0;
}