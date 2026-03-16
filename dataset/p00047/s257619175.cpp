#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[3],tmp,b,c;
	char array[3] = {'A','B','C'};
	a[0] = 1;
	string str;
	while(cin >> str){
		if(str[0] == 'A') b = 0;
		else if(str[0] == 'B') b = 1;
		else b = 2;
		if(str[2] == 'A') c = 0;
		else if(str[2] == 'B') c = 1;
		else c = 2;
		tmp = a[b];
		a[b] = a[c];
		a[c] = tmp;
	}
	for(int i=0;i<3;i++){
		if(a[i] == 1){
			cout << array[i] << endl;
			break;
		}
	}
	return 0;
}