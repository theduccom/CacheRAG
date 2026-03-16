//#define _USE_MATH_DEFINES
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//#include <iomanip>
#include <vector>
#include <string>
//#include <algorithm>
//#include <functional>
//#include <cmath>
//#include <time.h>

using namespace std;


int main(){

	int n, k1, k2, left, right, buf, flag;
	string s1, s2 , out;
	int aa1[10], aa2[10], ans[11];

	cin >> n;

	for (int nn = 0; nn < n; nn++){
		for (int i = 0; i < 10; i++){
			aa1[i] = 0;
			aa2[i] = 0;
			ans[i] = 0;
		}
		ans[10] = 0;
		flag = 0;

		cin >> s1 >> s2;
		k1 = s1.size();
		k2 = s2.size();

		if (k1 > 80 || k2 > 80){
			cout << "overflow" << endl;
		}
		else{
			buf = 8 - k1 % 8;
			for(int i = 0; i < buf; i++){
				s1.insert(0,"0");
			}
			buf = 8 - k2 % 8;
			for (int i = 0; i < buf; i++){
				s2.insert(0, "0");
			}
			left = s1.size()-8;
			for (int i = 0; i < 10; i++){
				aa1[i] = atoi(s1.substr(left, 8).c_str());
				left -= 8;
				if (left < 0)break;
			}
			left = s2.size() - 8;
			for (int i = 0; i < 10; i++){
				aa2[i] = atoi(s2.substr(left, 8).c_str());
				left -= 8;
				if (left < 0)break;
			}

			for (int i = 0; i < 10; i++){
				ans[i] += aa1[i] + aa2[i];
				if (ans[i] >= 100000000){
					ans[i + 1] += 1;
					ans[i] -= 100000000;
				}
			}
			if (ans[10] >= 1){
				cout << "overflow" << endl;
			}
			else{
				for (int i = 9; i >= 0; i--){
					if (flag == 0){
						if (ans[i] != 0){
							printf("%d",ans[i]);
							flag = 1;
						}
					}
					else{
						printf("%08d", ans[i]);
					}
				}
				if (flag == 0)cout << 0;
				cout << endl;
			}
		}

	}
	
	return 0;
}