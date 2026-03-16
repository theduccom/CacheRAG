#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string str;
	while(cin >> str){
		for(unsigned i=0;i<str.size();i++){
			if(str[i] == '@'){
				stringstream sst;
				sst << str[i+1];
				int n;
				sst >> n;
				for(int j=0;j<n;j++){
					cout << str[i+2];
				}
				i+=2;
			}
			else
				cout << str[i];
		}
		cout << endl;
	}
	return 0;
}