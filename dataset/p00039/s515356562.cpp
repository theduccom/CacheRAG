#include <iostream>

int rfiguretonum(char r){
	if(r == 'I')return 1;
	if(r == 'V')return 5;
	if(r == 'X')return 10;
	if(r == 'L')return 50;
	if(r == 'C')return 100;
	if(r == 'D')return 500;
	if(r == 'M')return 1000;
	return 0;
}

int main(){
	std::string s;
	while(std::cin >> s, !std::cin.eof()){
		int res = 0;
		for(int i=0;i<s.length()-1;i++){
			if(rfiguretonum(s[i]) < rfiguretonum(s[i+1]))
				res -= rfiguretonum(s[i]);
			else
				res += rfiguretonum(s[i]);
		}
		res += rfiguretonum(s[s.length()-1]);
		std::cout << res << std::endl;
	}
}