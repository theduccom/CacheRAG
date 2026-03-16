#include <iostream>
#include <string>

using namespace std;

int main(void){
	string str, peach = "peach", apple = "apple";
	getline(cin,str);
	for(int i = 0;i < str.size();i++){
		int j;
		for(j = 0;j < 5;j++){
			if(str[i + j] != peach[j]){
				break;
			}
		}
		if(j == 5){
			for(j = 0;j < 5;j++){
				str[i + j] = apple[j];
			}
			continue;
		}
		for(j = 0;j < 5;j++){
			if(str[i + j] != apple[j]){
				break;
			}
		}
		if(j == 5){
			for(j = 0;j < 5;j++){
				str[i + j] = peach[j];
			}
		}
	}
	cout << str << endl;
	return 0;
}