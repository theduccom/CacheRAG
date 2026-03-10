#include <iostream>
using namespace std;

int main(){
	int i,j;
	int count = 9;

	for(i = 0; i < count; i++)
	{
		for (j = 0; j < count; j++)
		{
			cout << i+1 << "x" << j+1 << "=" << (i+1)*(j+1) << endl;
		}
	}
	return 0;
}
