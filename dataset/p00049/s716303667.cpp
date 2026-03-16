#include <iostream>
#include <string>
using namespace std;
int main(){
	int a;
	char b;
	string c;
	int t[4] = {0,0,0,0};
	while(cin >> a >> b >> c){
		if(c=="A") t[0]++;
		if(c=="B") t[1]++;
		if(c=="AB") t[2]++;
		if(c=="O") t[3]++;
	}
	cout << t[0] << endl;
	cout << t[1] << endl;
	cout << t[2] << endl;
	cout << t[3] << endl;
}