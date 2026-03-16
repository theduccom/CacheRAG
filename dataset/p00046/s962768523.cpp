#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
	double mountain, max = -1, mini = -1;
	while (scanf("%lf", &mountain) != EOF){
		if (max == -1 || mountain > max) max = mountain;
		if (mini == -1 || mountain < mini) mini = mountain;
	}
	printf("%.1f\n", max - mini);
	return 0;
}