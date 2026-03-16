#include <iostream>
#include <string>
#define S std::string
S f(S s,S x,S y){
	while (s.find(x)!=S::npos)
		s.replace(s.find(x),x.size(),y);
	return s;
}
int main(void){
	S s,a="apple",b="peach",x="X";
	getline(std::cin,s);
	std::cout<<f(f(f(s,a,x),b,a),x,b)<<"\n";
} 