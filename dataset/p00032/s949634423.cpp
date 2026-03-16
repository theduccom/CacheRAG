#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

int main(void){
	std::string input, buf;
	std::stringstream ss;
	int a[3];
	int i, ab, c;
	int Rectangle=0, Diamond=0;
	while(std::cin >> input){
		i=0;
		ss << input;
		while(getline(ss, buf,',')){
			a[i++] = std::atoi(buf.c_str());
		}
		ab = a[0]*a[0] + a[1]*a[1];
		c = a[2]*a[2];
		if(ab==c) Rectangle++;
		if(a[0]==a[1] && ab!=c) Diamond++;

		ss.str("");
		ss.clear(std::stringstream::goodbit);
	}
	std::cout << Rectangle << std::endl << Diamond << std::endl;
	return 0;
}

