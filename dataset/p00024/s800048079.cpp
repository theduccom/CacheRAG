#include <iostream>
using namespace std;
int main(void)
{
	double vmin;
	while(cin >> vmin){
		int N=1;
		while(1){
			if(vmin*vmin < 2*9.8*(5*N-5)) break;
			N++;
		}
		cout << N << endl;
	}
	return 0;
}