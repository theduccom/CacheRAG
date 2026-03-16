#include <iostream>
#include <string>
using namespace std;

int main(){
	int inp, a[4] = {};
	string in;
	while (true)
	{
		cin >> inp >> in;
		if (cin.eof() || inp == 0) { break; }
		if (in == ",A") { a[0]++; }
		else if (in == ",B") { a[1]++; }
		else if (in == ",AB") { a[2]++; }
		else { a[3]++; }
	}
	for(int i=0;i<4;i++){
		cout << a[i] << endl;
	}
	return 0;
}