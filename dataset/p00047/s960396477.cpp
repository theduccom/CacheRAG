#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	string str;
	char ball='A';
	while(cin>>str){
		if(str.at(0)==ball){
			ball=str.at(2);
		}
		else if(str.at(2)==ball){
			ball=str.at(0);
		}
	}
	cout<<ball<<endl;
}