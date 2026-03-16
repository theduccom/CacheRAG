#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){

	vector< int > p;
	vector< int > x;

	int p_i, x_i;
	int sum = 0, ave = 0, cnt = 0;

	while( scanf("%d,%d", &p_i, &x_i ) != EOF ) {
		sum += p_i * x_i;
		ave += x_i;
		cnt ++;
	}

	ave *= 10;
	ave /= cnt;
	if( ave % 10 > 4 ) ave = ave / 10 + 1;
	else ave /= 10;

	cout << sum << endl;
	cout << ave << endl;

    return 0;
}