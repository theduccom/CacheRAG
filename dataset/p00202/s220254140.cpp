#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

const int Max = 1000001;

int dishes[31];
bool dish[Max];
bool isPrime[Max];

int main(){

	for (int i = 2; i < Max; i++)isPrime[i] = true;
	for (int i = 2; i < std::sqrt(Max); i++){
		if (isPrime[i]){
			for (int j = i * 2; j < Max; j += i)isPrime[j] = false;
		}
	}

	int n, x;
	while (std::cin >> n, n){

		std::cin >> x;
		memset(dish, 0, sizeof(dish));

		for (int i = 0; i < n; i++){
			std::cin >> dishes[i];
		}

		dish[0] = true;
		for (int i = 0; i < x; i++){
			if (dish[i]){
				for (int j = 0; j < n; j++){
					if (i + dishes[j] <= Max)dish[i + dishes[j]] = true;
				}
			}
		}

		for (int i = x; i >= 0; i--){
			if (dish[i] && isPrime[i]){
				std::cout << i << std::endl;
				break;
			}
			if (i == 0)std::cout << "NA" << std::endl;
		}
	}

	return 0;
}