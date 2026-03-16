#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	string s;
	int a,b,c;
	int ch=0,hi=0;
	while(cin >> s){
		sscanf(s.c_str(),"%d,%d,%d",&a,&b,&c);
		if(a*a+b*b==c*c){
			ch++;
		}else if(a==b){
			hi++;
		}
	}
	cout << ch << endl << hi << endl;
}