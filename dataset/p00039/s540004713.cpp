#include <iostream>
#include <string>
using namespace std;

int convert(char a){
	if(a == 'M') return 1000;
	else if(a == 'D') return 500;
	else if(a == 'C') return 100;
	else if(a == 'L') return 50;
	else if(a == 'X') return 10;
	else if(a == 'V') return 5;
	else return 1;
}

int main(){
	string str;
	int res,now,next;
	while(getline(cin,str)){
		res = 0;
		for(int i = 0;i < str.size();++i){
			now = convert(str[i]);
			next = i + 1 == str.size() ? 0 : convert(str[i+1]);
			if(now >= next) res += now;
			else {
				res += (next - now);
				++i;
			}
		}
		cout << res << endl;
	}
}