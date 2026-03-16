#include <iostream>
#include <string>


int main(int argc,char* argv[]){
		std::string ans[7] ={"1100000011","1000000010000000100000001","1111","1000000110000001","11000000011","100000001100000001","110000011"};
		std::string alpha[7]={"A","B","C","D","E","F","G"};
		std::string prob[8];
		std::string problem;

		while(std::cin >> prob[0]){
						for(int a=1; a < 8; a++){
										std::cin >> prob[a];
						}
						for(int b=0; b < 8; b++){
										problem = problem + prob[b];
						}
						for(int c=0; c < 7; c++){
										std::string::size_type index = problem.find(ans[c]);
										if(index != std::string::npos){
														std::cout << alpha[c] << std::endl;
										}
						}
						problem ="";
		}
}