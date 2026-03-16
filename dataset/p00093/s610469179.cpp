#include <iostream>

using namespace std;

int main(void)
{
	int in1,in2;

	cin >> in1 >> in2;
	while(in1 | in2){
		int c = 0;
		for(int i = in1; i <= in2; i++){
			if(i % 4 == 0 && ( (i % 100 > 0 || i % 400 == 0) ) ){
				cout << i << endl;
				c++;
			}
		}
		if(c == 0)
			cout << "NA" << endl;

		cin >> in1 >> in2;
		if(in1 | in2)
			cout << endl;

	}

	return 0;
}