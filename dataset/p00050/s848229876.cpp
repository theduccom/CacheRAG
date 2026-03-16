#include<iostream>
#include<string>
using namespace std;

int main(){
	string input;
	bool isFirst = true;
	while(cin >> input){
		if(!isFirst) cout << " ";
		if(input.find("apple", 0) != string::npos){
			for(int i=0; i < input.find("apple", 0); i++){
				cout << input[i];
			}
			cout << "peach";
			for(int i=input.find("apple", 0)+5; i < input.size(); i++){
				cout << input[i];
			}
		}
		else if(input.find("peach", 0) != string::npos){
			for(int i=0; i < input.find("peach", 0); i++){
				cout << input[i];
			}
			cout << "apple";
			for(int i=input.find("peach", 0)+5; i < input.size(); i++){
				cout << input[i];
			}
		}
		else cout << input;
		isFirst = false;
	}
	cout << endl;
}