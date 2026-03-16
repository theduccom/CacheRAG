#include <iostream>

using namespace std;

int main()
{
	int a[11];
	double s, t, v1, v2;
	
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%lf,%lf",
				&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10],&v1,&v2)!=EOF){
		s = 0;
		for(int i = 1; i <= 10; i++){
			s += a[i];
		}
		t = s/(v1+v2);
		s = 0;
		for(int i = 1; i <= 10; i++){
			s += a[i];
			if(s >= v1*t){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}