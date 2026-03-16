#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		int ans = 0;
		vector<int> array;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == 'I'){
				array.push_back(1);
			}
			else if(str[i] == 'V'){
				array.push_back(5);
			}
			else if(str[i] == 'X'){
				array.push_back(10);
			}
			else if(str[i] == 'L'){
				array.push_back(50);
			}
			else if(str[i] == 'C'){
				array.push_back(100);
			}
			else if(str[i] == 'D'){
				array.push_back(500);
			}
			else{
				array.push_back(1000);
			}
		}
		for(int i = 0; i < array.size()-1; i++){
			if(array[i] < array[i+1]){
				array[i] = -1*array[i];
			}
		}
		for(int i = 0; i < array.size(); i++){
			ans = ans+array[i];
		}
		cout << ans << endl;
	}
}