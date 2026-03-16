#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	cin.ignore();

	for(int i=0;i<n;i++){
		string str, s = "Hoshina";
		getline(cin, str);

		while(str.find("Hoshino") != string::npos)
			str.replace(str.find("Hoshino"), s.size(), s);

		cout<<str<<endl;
		
	}

	return 0;
}