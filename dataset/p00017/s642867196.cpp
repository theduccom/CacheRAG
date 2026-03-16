#include <iostream>
#include <string>

using namespace std;

int main(void){
	int i, len;
	string encrypted, tmp, decoded;

	while(getline(cin, encrypted)){
		len = encrypted.size();
	
		while(encrypted.find("this") == string::npos &&
			  encrypted.find("that") == string::npos &&
			  encrypted.find("the")  == string::npos){
			for(i=0;i<len;i++){
				if(encrypted[i] >= 97 && encrypted[i] <=122){ //isAlphabet(encrypted[i]);
					encrypted[i] += 1;
					if(encrypted[i] == 123) encrypted[i] = 97;//z->a
				}
			}
		}
	
		cout << encrypted << endl;
	}
	return 0;
}