#include <iostream>
#include <string>
using namespace std;
#define S string
S f(S s,S x,S y){
	while (true){
		S::size_type p = s.find(x);
		if (p == S::npos) break;
		s.replace(p, x.size(), y);
	}
	return s;
}
int main(void){
	S s,a="apple",b="peach",x="X";
	getline(cin,s);
	s=f(s,a,x);
	s=f(s,b,a);
	s=f(s,x,b);
	cout<<s<<endl;
} 