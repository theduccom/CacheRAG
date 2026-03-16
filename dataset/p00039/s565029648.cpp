#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int sum=0;
	string s;
	while(cin >> s){
		s.resize(s.size()+1);
		for(int i=0;i<s.size()-1;++i){
			if(s[i]=='I'){
				if(s[i+1]=='V') sum+=4 , s[i+1]='@';
				else if(s[i+1]=='X') sum+=9 ,s[i+1]='@';
				else if(s[i+1]=='L') sum+=49 , s[i+1]='@';
				else if(s[i+1]=='C') sum+=99 , s[i+1]='@';
				else if(s[i+1]=='D') sum+=499 , s[i+1]='@';
				else if(s[i+1]=='M') sum+=999 , s[i+1]='@';
				else sum+=1;
			} else if (s[i]=='V'){
				if(s[i+1]=='X') sum+=5 , s[i+1]='@';
				else if(s[i+1]=='L') sum+=45 , s[i+1]='@';
				else if(s[i+1]=='C') sum+=95 , s[i+1]='@';
				else if(s[i+1]=='D') sum+=450 , s[i+1]='@';
				else if(s[i+1]=='M') sum+=950 , s[i+1]='@';
				else sum+=5;
			} else if (s[i]=='X'){
				if(s[i+1]=='L') sum+=40 , s[i+1]='@';
				else if(s[i+1]=='C') sum+=90 , s[i+1]='@';
				else if(s[i+1]=='D') sum+=490 , s[i+1]='@';
				else if(s[i+1]=='M') sum+=990 , s[i+1]='@';
				else sum+=10;
			} else if (s[i]=='L'){
				if(s[i+1]=='C') sum+=50 , s[i+1]='@';
				else if(s[i+1]=='D') sum+=450 , s[i+1]='@';
				else if(s[i+1]=='M') sum+=950 , s[i+1]='@';
				else sum+=50;
			} else if (s[i]=='C'){
				if(s[i+1]=='D') sum+=400 , s[i+1]='@';
				else if(s[i+1]=='M') sum+=900 , s[i+1]='@';
				else sum+=100;
			} else if (s[i]=='D'){
				if(s[i+1]=='M') sum+=500 , s[i+1]='@';
				else sum+=500;
			} else if (s[i]=='M'){
				sum+=1000;
			}
		}
		cout << sum << endl;
		sum=0;
	}
	return 0; 
}