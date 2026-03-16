#include<iostream>
using namespace std;
int weights[10] = { 1,2,4,8,16,32,64,128,256,512 };
bool have[10] = { false,false,false,false,false,false,false,false,false,false };
int main() {
	int w;
	while (cin >> w) {
		int now = 0;
		int tmp = 0;
		for (int i = 0; i < 10; i++)have[i] = false;
		while (tmp < w) {
			tmp += weights[now];
			have[now] = true;
			now++;
		}
		while (tmp != w) {

			if (have[now]) {
				if (tmp - weights[now] >= w) {
					tmp -= weights[now];
					have[now] = false;
					now--;
				}
				else now--;
			}
			else {
				now--;
			}
		}
		int last;
		for (int i = 0; i < 10; i++)if (have[i])last = i;
		for (int i = 0; i < 10; i++) {
			if (have[i]) {
				if (i!=last)cout << weights[i] << ' ';
				else cout << weights[i];
			}
		}
		cout << endl;
	}
}