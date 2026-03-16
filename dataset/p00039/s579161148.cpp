#include <iostream>
#include <string>
using namespace std;


int c(char c){
	return c=='I'? 1:
		c=='V'? 5:
		c=='X'? 10:
		c=='L'? 50:
		c=='C'? 100:
		c=='D'? 500: 1000;
}


int main(){
	string s;
	while(cin>>s){
		int sum=0, i=0;
		for(; i<s.size()-1; i++){
			if(c(s[i])>=c(s[i+1]))sum+=c(s[i]);
			else
				sum+=c(s[i+1])-c(s[i]), i++;
		}
		if(i<s.size())sum+=c(s[i]);
		cout<<sum<<"\n";
		s.clear();
	}
	return 0;
}