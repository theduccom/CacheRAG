#include<string>
#include<cstdlib>
#include<iostream>

using namespace std;

int prior[128];

long long parse(string s)
{
	if(s[0]=='(' && s[s.length()-1]==')'){
		bool f=true;
		for(int i=1,d=1;i<s.length()-1;i++){
			if     (s[i]=='(')	d++;
			else if(s[i]==')')	d--;
			if(d==0){	f=false;	break;	}
		}
		if(f)	return parse(s.substr(1,s.length()-2));
	}

	int divprr=3,divpos=10000000;
	for(int i=s.length()-1,d=0;i>=1;i--){
		if     (s[i]==')')	d--;
		else if(s[i]=='(')	d++;

		else if(d==0 && prior[s[i]]!=0){
			if(divprr>prior[s[i]])
				divprr=prior[s[i]],divpos=i;
		}
	}

	if(divpos==10000000)	return atoll(s.c_str());

	switch(s[divpos]){
		case '+': return parse(s.substr(0,divpos)) + parse(s.substr(divpos+1));
		case '-': return parse(s.substr(0,divpos)) - parse(s.substr(divpos+1));
		case '*': return parse(s.substr(0,divpos)) * parse(s.substr(divpos+1));
		case '/': return parse(s.substr(0,divpos)) / parse(s.substr(divpos+1));
	}

	while(1);
}

int main()
{
	prior['+']=prior['-']=1;
	prior['*']=prior['/']=2;

	int n;	cin>>n;
	while(n--){
		string s;	cin>>s;
		s=s.substr(0,s.length()-1);
		cout<<parse(s)<<endl;
	}

	return 0;
}