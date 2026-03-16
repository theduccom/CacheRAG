#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double max, min, tmp;
	
	cin >> max;
	min = max;
	
	while(cin >> tmp){
		if(max < tmp){
			max = tmp;
		} else if(tmp < min){
			min = tmp;
		}
	}
	
	cout << (double)(max - min) << endl;
	
	return 0;
}