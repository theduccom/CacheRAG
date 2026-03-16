#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	char a,b,c,d;
	d = 'A';
	while(cin >> a >> b >> c){
		if(a==d) d = c;
		else if(c==d) d = a;
	}
	cout << d << endl;
}