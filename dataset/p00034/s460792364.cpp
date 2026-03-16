#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int dis[10];
	int v[2];

	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &dis[0], &dis[1], &dis[2], &dis[3], &dis[4], &dis[5], &dis[6], &dis[7], &dis[8], &dis[9], &v[0], &v[1]) != EOF) {
		double total_dis = 0.0;
			for (int i = 0; i < 10; i++) {
				total_dis += static_cast<double>(dis[i]);
			}
			double meet_time = total_dis / (v[0] + v[1]);
			double meet_dis = meet_time*v[0];
			double passed_dis = 0;
			for (int i = 0;; i++) {
				passed_dis += static_cast<double>(dis[i]);
				if (passed_dis == meet_dis) {
					cout << i+1 << endl;
					break;
				}
				if (passed_dis > meet_dis) {
					cout << i+1 << endl;
					break;
			}
		}
	}
}