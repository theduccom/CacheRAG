#define scanf_s scanf
//#define sscanf_s sscanf
//#define gets_s gets
#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 11
#define HO 6
int main(void)
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; ++i) {
		int out_cou = 0, point = 0;
		bool rui[4] = { 0 };
		while (out_cou < 3) {
			string ev;
			cin >> ev;
			if (ev == "HIT") {
				rui[0] = true;
				for (int i = 3; i >= 1; --i) {
					if (rui[i] == true && i == 3) { ++point; rui[i] = false; }
					if (rui[i - 1] == true) { rui[i] = true; rui[i - 1] = false; }
				}
			}
			else if (ev == "OUT") {
				++out_cou;
			}
			else if (ev == "HOMERUN") {
				for (int i = 1; i < 4; ++i) {
					if (rui[i] == true) { ++point; }
					rui[i] = false;
				}
				++point;
			}
		}
		printf("%d\n", point);
	}
}