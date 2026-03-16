#define _USE_MATH_DEFINES
 
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int num(char c){
	switch(c){
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	}

	return 0;
}


int main(){
	string str;
	while(cin >> str){
		int pre = num(str[0]);
		int sum = pre;
		//int sum = 0;
		for(int i=1;i<str.size();i++){
			if(pre>=num(str[i])){
				sum+=num(str[i]);
			}else{
				sum+=-pre+num(str[i])-pre;
			}
			pre = num(str[i]);
			//cout << sum <<" ";
		}
		cout<<sum<<endl;
	}
	return 0;
}