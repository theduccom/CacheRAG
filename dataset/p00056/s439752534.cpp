#include<iostream>
#include<math.h>
using namespace std;
int p[50000] = { 0 };

int main(){
	int n, q, count, k, l = 0;
	
	for (int i = 2; i <= 300;i++)
		for (int j = i*2; j <= 50000; j += i){
			p[j] = 1;
		}
		
		while ((cin >> n), n){
			int count = 0;
			for (int i = 2; i <= n / 2; i++){
				if (p[n - i] == 0 && p[i] == 0)count++;
			}
			cout << count << endl;
		}
	return 0;
}