#include<iostream>
#include<cstdio>

int main() {
	int rect = 0, lozen = 0, a = 0, b = 0, c = 0;
	while (std::scanf("%d,%d,%d",&a,&b,&c) != EOF) {
		if (a == b) ++lozen;
		if (a * a + b * b == c * c) ++rect;
	}
	std::cout << rect << std::endl << lozen << std::endl;
	return 0;
}
