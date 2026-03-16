#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int l[10];
	double v1, v2;
	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%lf,%lf", &l[0], &l[1], &l[2], &l[3], &l[4], &l[5], &l[6], &l[7], &l[8], &l[9], &v1, &v2) != EOF) {
		int distance = 0;
		for (int i = 0; i < 10; i++)
			distance += l[i];
//		cout << distance << endl;
		double time = distance / (v1 + v2);
//		printf("%.6lf\n", time);
		double cross = v1 * time;
//		printf("%.6lf\n", cross);
		double sum = 0;
		for (int i = 0; i < 10; i++) {
			sum += l[i];
			if (sum >= cross) {
				cout << i+1 << endl;
				break;
			}
		}
	}
	return 0;
}