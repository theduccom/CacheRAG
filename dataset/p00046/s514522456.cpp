#include <iostream>
using namespace std;

int main(){
	float max = 0, min = 1000000, in;
	while (true)
	{
		cin >> in;
		if (cin.eof()) { break; }
		if(max<in){
			max = in;
		}
		else if (min > in){
			min = in;
		}
	}
	cout << max - min << endl;

	return 0;
}