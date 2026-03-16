#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int value, num, i=0, total=0, ave=0;

	while(scanf("%d, %d", &value, &num)!=EOF) {
		total+=value*num;
		ave+=num;
		i++;
	}

	cout << total << endl << (int)(ave/(double)i+0.5) << endl;

	return 0;

}