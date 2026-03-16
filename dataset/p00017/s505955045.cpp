#include<iostream>
#include<string>
using namespace std;

int main(){
	string str;
	while(getline(cin, str)){
		while(str.find("this", 0) == string::npos && str.find("that", 0) == string::npos && str.find("the", 0) == string::npos){
			for(int i = 0; i < str.size(); ++i){
				if(str[i] >= 'a' && str[i] <= 'z'){
					if(str[i] != 'z')
						++str[i];
					else
						str[i] = 'a';
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}