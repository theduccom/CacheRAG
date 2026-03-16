#include<iostream>
#include<string>
using namespace std;
int main(){
	const int MAX = 10010;
	int katarogu[MAX] = { 0 };
	const int NOsosu = 1;
	int num[MAX] = { 0 };
	num[1] = NOsosu;
	for (int i = 3; i < MAX; i = i + 2){
		for (int j = 3; j*j <= i; j = j + 2){
			if (i%j == 0){ num[i] = NOsosu; break; }
		}
		katarogu[i - 1] = katarogu[i - 2];
		katarogu[i] = katarogu[i - 2];
		if (num[i] != NOsosu && num[i - 2] != NOsosu){ katarogu[i] = i; }
	}
	int a;
	while (cin >> a, a != 0){ cout << katarogu[a] - 2<<" "<<katarogu[a] << endl; }

	return 0;
}
