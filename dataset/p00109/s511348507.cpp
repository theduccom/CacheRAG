//https://gist.github.com/draftcode/1357281
#include <string>
#include <cctype>
#include <iostream>
typedef std::string::iterator State;
class ParseError {};

int number(State &begin);
int factor(State &begin);
int term(State &begin);
int expression(State &begin);
void consume(State &begin, char expected){
	if(*begin == expected){
		begin++;
	}else{
		std::cerr << "Expected '" << expected << "' but got '"<<*begin << "'"<<std::endl;
		std::cerr << "Rest string is '";
		while(*begin){
			std::cerr << *begin++;
		}
		std::cerr<<"'"<<std::endl;
		throw ParseError();
	}
}

int main(void){
	int N;
	std::cin >> N;
	std::cin.ignore();
	while(N--){
		std::string s;
		std::getline(std::cin, s);
		//std::cin>>s;
		State begin = s.begin();
		int ans = expression(begin);
		//consume(begin, '=');
		std::cout << ans << std::endl;
	}
	return 0;
}

int number(State &begin){
	int ret = 0;

	while(isdigit(*begin)){
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}

	return ret;
}

int factor(State &begin){
	int ret;
	if(*begin == '('){
		//consume(begin,'(');
		begin++;
		ret = expression(begin);
		//consume(begin,')');
		begin++;
	}else{
		return number(begin);
	}
	return ret;
}

int term(State &begin){
	int ret = factor(begin);

	for(;;){
		if(*begin == '*'){
			begin++;
			ret *= factor(begin);
		}else if(*begin == '/'){
			begin++;
			ret /= factor(begin);
		}else{
			break;
		}
	}
	return ret;
}

int expression(State &begin){
	int ret = term(begin);

	for(;;){
		if(*begin == '+'){
			begin++;
			ret += term(begin);
		} else if(*begin == '-'){
			begin++;
			ret -= term(begin);
		}else {
			break;
		}
	}
	return ret;
}