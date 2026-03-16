#include<iostream>
#include<string>

using namespace std;

int main(){

	string str;
	char alph[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	int num[7] = {1, 5, 10, 50, 100, 500, 1000};
	int x, s[100];
	
	while(cin >> str){
		for(int i=0; i<str.length(); i++){
			for(int j=0; j<7; j++){
				if(str[i] == alph[j]){
					s[i] = num[j];
				}
			}
		}
		
		x = s[str.length()-1];
		for(int i=str.length()-2; i>=0; i--){
			if(s[i+1] > s[i]){
				x -= s[i];
			}
			else{
				x += s[i];
			}
		}
		
		cout << x << endl;
		
	}
	
	return 0;
	
}