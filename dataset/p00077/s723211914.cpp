#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	int max,i,n,j;
	while(cin >> str){
		max = str.size();
		n = 0;
		for(i = 0;i < max;++i){
			if(n == 0){
				if(str[i] == '@'){
					++i;
					n = (int)(str[i] - '0');
				}
				else {
					cout << str[i];
				}
			}
			else {
				for(j = 0;j < n;j++){
					cout << str[i];
				}
				n = 0;
			}
		}
		cout << "\n";
	}
	return 0;
}