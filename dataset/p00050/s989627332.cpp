#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

void SwapPeachAndApple(string &str){
	string s;

	for(unsigned int i = 0; i < str.length(); i++){
		if( str.find("apple", i) == i ){
			s += "peach";i+=4;
		}else if( str.find("peach", i) == i ){
			s += "apple";i+=4;
		}else{
			s += str.at(i);
		}
	}
	str = s;
	return ;
}

int main(void){
	char buf[1024];
	string s;

	cin.get(buf, sizeof(buf)/sizeof(buf[0]));
	s = buf;
	SwapPeachAndApple(s);

	cout << s << endl;
	return 0;
}