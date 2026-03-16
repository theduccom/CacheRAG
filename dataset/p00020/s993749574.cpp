#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(void){
	int i,j,k,n;
	string str;
	while(getline(cin,str)){
		for(i=0;i<str.size();i++){
		if('a' <= str[i] && str[i] <= 'z') str[i] -= 'a' - 'A';
		}
		cout << str << endl;
	}
	return 0;
}