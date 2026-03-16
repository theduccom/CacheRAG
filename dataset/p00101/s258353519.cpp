#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	
	int n;
	
	char str[2000];
	
	cin >> n;
	
	cin.ignore();
	
	for(int loop = 0; loop < n; loop++){
		gets(str);
		
		for(int i = 0; i <= 1000; i++){
			if(str[i] == 'H' && str[i + 1] == 'o' && str[i + 2] == 's' && str[i + 3] == 'h' && str[i + 4] == 'i' && str[i + 5] == 'n' && str[i + 6] == 'o'){
				str[i + 6] = 'a';
			}
			if(str[i] == '\0'){
				break;
			}
			cout << str[i];
		}
		
		cout << endl;
	}
	
	return 0;
}