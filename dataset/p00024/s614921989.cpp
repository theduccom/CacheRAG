#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double v, t, y;
	
	while(cin >> v){
		t = v / 9.8;
		y = 4.9*t*t;
		
		for(int i = 1; i > 0; i++){
			if((5*i-5) > y){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}