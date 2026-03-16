#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(){
	int n,start;
	string s;

	cin >> n;

	scanf("%*c");

	for(int i=0;i<n;i++){
		std::getline(cin,s);
		while(1){
			start = s.find("Hoshino",0);
			if(string::npos==start)break;
			s.replace(start,7,"Hoshina");
		}
		cout << s << endl;
	}

	return 0;
}