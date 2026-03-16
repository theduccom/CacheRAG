#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<int> getArrayToLine(void);
int getMinimumPrice(std::vector<int> v, int i);

int main(void){
	int n; //number of bought vegetables
	int m; //number of vegetables that can be packed

	while(std::cin >> n >> m){
		if(n == 0 && m == 0){ //end input
			break;
		}

		std::cout << getMinimumPrice(getArrayToLine(), m) << std::endl; //output result
	}

	return 0;
}

std::vector<int> getArrayToLine(void){
	std::vector<int> v;
	std::string buf;
	int tmp;

	std::cin.ignore();
	std::getline(std::cin, buf); //input line data
	std::istringstream is(buf);

	while(is >> tmp){ //input number
		v.push_back(tmp); //add number to array
	}

	return v;
}

int getMinimumPrice(std::vector<int> v, int i){
	int ans = 0;
	size_t cnt = 0; 

	//do process
	std::sort(v.begin(), v.end());

	while(!(v.empty())){
		++cnt;

		if(cnt % i == 0){
			v.pop_back();
		}else{
			ans = ans + v.back();
			v.pop_back();
		}
	}

	return ans;
}