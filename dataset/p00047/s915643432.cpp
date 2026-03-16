#include <iostream>
#include <string>
using namespace std;

int main(){
	string in;
	int a[3] = { 1,0,0 }, x, y;
	while (true)
	{
		cin >> in;
		if (cin.eof()) { break; }
		x = in[0];
		y = in[2];
		int tmp = a[x - 65];
		a[x - 65] = a[y - 65];
		a[y - 65] = tmp;
	}
	for(int i=0;i<3;i++){
		if(a[i] == 1){
			string out;
			out = i + 65;
			cout << out << endl;
			break;
		}
	}
	return 0;

}