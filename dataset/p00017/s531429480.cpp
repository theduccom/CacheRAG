#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	string str1;
	int i, j, n = 0;
	while(getline(cin, str1)){
		bool change = false;
		for(i = 0;i < 28;i++){
			for(j = 0;j < str1.size();j++){
				if(str1[j] != ' ' && str1[j] != '.'){
					if(str1[j] == 'a'){
						str1[j] = 'z';
					}
					else str1[j] -= 1;
				}
			}
			for(j = 0;j+3 < str1.size();j++){
				if(str1[j] == 't' && str1[j+1] == 'h'){
					//if(str1[j+2] == 'e' || (str1[j+2] == 'i' && str1[j+3] == 's') || (str1[j+2] == 'a' && str1[j+3] == 't')){
						n = i + 1;
						change = true;
						break;
					//}
				}
			}
			if(change) break;
		}	
		for(i = 0;i < str1.size();i++){
			cout << str1[i];
		}
		cout << endl;
		
	}


	return 0;
}