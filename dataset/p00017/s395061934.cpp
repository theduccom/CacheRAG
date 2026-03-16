#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		while(1){
			for(int j=0;j<s.size();j++){
				if(s[j]>=97&&s[j]<=122){
					s[j]+=1;
					if(s[j]==123)
					s[j]=97;
				}
			}
			if(s.find("the")!=string::npos)
			break;
			if(s.find("this")!=string::npos)
			break;
			if(s.find("that")!=string::npos)
			break;
		}
			printf("%s\n",s.c_str());
	}
}