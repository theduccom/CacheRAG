#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int number(string::const_iterator &c){//number
	int ret = 0;
	while(isdigit(*c)){
		ret*=10;
		ret+=*c-'0';
		c++;
	}
	return ret;
}

int expression(string::const_iterator&);
int factor(string::const_iterator &c) {
	int ret;
	if (*c=='(') {
    	c++;
		ret = expression(c);
		c++;
	}else return number(c);
	return ret;
}

int term(string::const_iterator &c){//*or/
	int ret = factor(c);
	for(;;){
		if(*c=='*'){
			c++;
			ret*=factor(c);
		}else if(*c=='/'){
			c++;
			ret/=factor(c);
		}else break;
	}
	return ret;
}

int expression(string::const_iterator &c){//all
	int ret = term(c);
	for(;;){
		if(*c=='+'){
			c++;
			ret+=term(c);
		}else if(*c=='-'){
			c++;
			ret-=term(c);
		}else break;
	}
	return ret;
}

int main(){
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin,s);
		string::const_iterator c=s.begin();
		cout<<expression(c)<<"\n";
	}
	return 0;
}