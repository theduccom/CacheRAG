#include <iostream>

int main(){
	int n;
	while(std::cin >> n, n){
		int ice[10] = {0};
		for(int i=n;i;i--){
			int t;
			std::cin >> t;
			ice[t]++;
		}


		for(int i=0;i<10;i++){
			if(ice[i])
				for(int j=ice[i];j;j--)
					std::cout << "*";
			else
				std::cout << "-";
			std::cout << "\n";
		}
	}
}