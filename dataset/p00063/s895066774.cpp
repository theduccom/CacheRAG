#include <algorithm>
#include <iostream>
#include <string>
int main(){
	int a=0;
	std::string s,x;
	for(;std::cin>>s;){
		x=s;
		reverse(x.begin(),x.end());
		if (x==s) a++;
	}
	std::cout<<a<<"\n";
}