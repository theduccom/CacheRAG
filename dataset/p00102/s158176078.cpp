#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int n;
	while (1) {
		cin >> n;
		if (n == 0)break;
		int matrix[11][11];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> matrix[i][j];
			}
		}
		int num1, num2;
		for (int i = 0; i < n; i++) {
			num1 = 0; num2 = 0;
			for (int j = 0; j < n; j++) {
				num1 += matrix[i][j];
				num2 += matrix[j][i];
			}
			matrix[i][n] = num1;
			matrix[n][i] = num2;
		}
		num1 = 0;
		for (int i = 0; i < n; i++) {
			num1 += matrix[n][i];
		}
		matrix[n][n] = num1;
		for (int i = 0; i < n + 1; i++) {
			for (int j = 0; j < n + 1; j++) {
				printf("%5d", matrix[i][j]);
			}
			printf("\n");
		}
	}
}
