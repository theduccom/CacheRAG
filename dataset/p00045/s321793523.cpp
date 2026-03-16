#include <iostream>
using namespace std;
int main(void)
{
	int lin=0;
	int m,n;
	int summ=0;
	int sumn=0;
	while(scanf("%d,%d",&m,&n)!=EOF){
		summ += m*n;
		sumn += n;
		lin++;
	}
	cout << summ << endl;
	cout << (int)((double)sumn/lin+0.5) << endl;
	return 0;
}