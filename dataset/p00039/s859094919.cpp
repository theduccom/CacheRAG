#include<iostream>
#include<string>
#include<algorithm>

const char roma[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
const int cost[7] = {1, 5, 10, 50, 100, 500, 1000};

int main(){
	std::string str;
	while(std::cin >> str){
		int res = 0;

		for(int i = 0; i < str.size(); i++){
			int a = 0, b = 0;
			a = std::find(roma, roma + 7, str[i]) - roma;

			if(i == str.size() - 1)res += cost[a];
			else {
				b = std::find(roma, roma + 7, str[i + 1]) - roma;
				if(a >= b)res += cost[a];
				else if(a < b)res += (cost[b] - cost[a]), i++;
			}
		}

		std::cout << res << std::endl;
	}
	return 0;
}