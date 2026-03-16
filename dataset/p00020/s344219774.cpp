#include <iostream>
#include <cstring>

using namespace std;


int main(){
	char ch[1024];
	int len;
	
	cin.getline(ch, sizeof(ch));
	len = strlen(ch);
	
	for (int i=0; i<len; i++) {
		if (ch[i]>='a' && ch[i]<='z') {
			ch[i]-=32;
		}
	}
	cout << ch << endl;
	
	
	return 0;
}