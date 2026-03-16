#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string buf;
	while(cin >> buf){
		string res = "";
		bool f = false;
		for(int i = 0;i < buf.size();++i){
			if(f){
				f = false;
				int c = buf[i] - '0';
				++i;
				for(int j = 0;j < c;++j){
					res += buf[i];
				}
			}
			else if(buf[i] != '@'){
				res += buf[i];
			}
			else{
				f = true;
			}
		}
		cout << res << endl;
	}
}