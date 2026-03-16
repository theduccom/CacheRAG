#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	while(cin >> input){
		for(int i=0; i < input.size(); i++){
			if(input[i] == '@'){
				i++;
				int n = input[i] - '0';
				i++;
				for(int j=0; j < n; j++){
					cout << input[i];
				}
			}
			else cout << input[i];
		}
		cout << endl;
	}
}