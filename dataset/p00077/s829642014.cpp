#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <bitset>
 
#define INPUT_FROM_FILE (0) 
#if INPUT_FROM_FILE
#include <fstream>
#endif


int main(int argc, char **argv){
	std::string str;

#if INPUT_FROM_FILE
	std::ifstream ifs("test.txt");
	//FILE *fp = fopen("test.txt", "r");
#endif

#if INPUT_FROM_FILE
	while(std::getline(ifs, str)){
#else
	while(std::getline(std::cin, str)){
#endif
		std::string result;

		for(int i = 0; i < str.size(); i++){
			if(str[i] == '@'){
				int n = str[i + 1] - '0';
				std::string s(1, str[i + 2]);
				for(int j = 0; j < n; j++){
					result.append(s);
				}
				i += 2;
			}
			else{
				std::string s(1, str[i]);
				result.append(s);
			}
		}
		std::cout << result << std::endl;
	}


 
#if INPUT_FROM_FILE
	//fclose(fp);
#endif
    return 0;
}
