#include<iostream>
using namespace std;

int main(){

	for(int n = 1; n < 10; n++)
	{
		for(int k = 1; k < 10; k++)
		{
			int nk = n*k;
			cout << n << "x" << k << "=" << nk << endl;
		}
	}

    return 0;
}