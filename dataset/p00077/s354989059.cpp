#include <iostream>
#include <string>
using namespace std;

int index(char c){
	return (int)c - 48;
}

int main(){
	string s;
	while(cin >> s){
		for(string::iterator iter = s.begin();
			iter != s.end(); iter++)
		{
			if(*iter == '@'){
				iter++;
				int n = index(*iter);
				iter++;
				for(int i = 0; i < n; i++){
					cout << *iter;
				}
			}else{
				cout << *iter;
			}
		}
		cout << endl;
	}
	return 0;
}