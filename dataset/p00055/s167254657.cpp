#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a;
	while (cin >> a, !cin.eof()){
		double ans[10] = {};
		double sum = 0;
		ans[0] = a;
		for (int i = 1; i < 10; i++){
			if (i % 2 == 0){
				// 奇数番目
				ans[i] = ans[i - 1] / 3.0;
			}
			else{
				// 偶数番目
				ans[i] = ans[i - 1] * 2.0;
			}
		}
		for (int i = 0; i < 10; i++){
			sum += ans[i];
		}
		printf("%.9lf\n", sum);
	}

	return 0;
}