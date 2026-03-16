#include <iostream>
using namespace std;
int main(){
	int a,b;
	int s = 0;
	int v = 0;
	int n = 0;
	char c;
	while(cin >> a >> c >> b){
		s += a*b;
		v += b;
		n++;
	}
	int d = v/n;
	if((v-(d*n))*2>=n) d++;
	cout << s << endl;
	cout << d << endl;
}