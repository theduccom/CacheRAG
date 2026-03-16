#include <iostream>
#include <string>

using namespace std;


int main(){
	
	string s;
	
	while(getline( cin,s)){
		while (s.find("the")==-1&&s.find("this")==-1&&s.find("that")==-1) {
			for (int i=0; i<s.size(); i++) {
				if (s[i]>='a'&&s[i]<'z') {
					s[i]++;
				}
				else if(s[i]=='z')
					s[i]='a';
			
			}
		}
		cout << s <<endl;
	}
	
	return 0;
}
 