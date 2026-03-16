#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int d;
	cin >> d;
	for(int k=0;k<d;k++){
		char num[8];
		int num2[8];
		for(int i=0;i<8;i++){
			cin >> num[i];
			num2[i] = (int)num[i];
		}
		
		sort(num2,num2+8);
		int max=0,min=0;
		int a=1;
		int b=10000000;
		for(int i=0;i<8;i++){
			max += num2[i]*a;
			min += num2[i]*b;
			a*=10;
			b/=10;
		}
		cout << max-min << endl;
	}
	return 0;

}