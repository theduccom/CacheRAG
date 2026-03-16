#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
	string str;
	while(cin >> str){
		int len = str.size();
		for(int i=0;i<len;i++){
			if(str[i] == '@'){
				i++;
				string tmp = "";
				tmp += str[i];
				istringstream iss(tmp);
				int cou = 0;
				iss >> cou;
				i++;
				for(int j=0;j<cou;j++){
					cout << str[i];
				}
			}
			else cout << str[i];
		}
		cout << endl;
	}
}