#include <iostream>
int main(){
	char c,n;
	for(;std::cin.get(c);){
		n='1';
		if(c=='@')std::cin>>n>>c;
		for (;n-->'0';)std::cout<<c;
	}
}