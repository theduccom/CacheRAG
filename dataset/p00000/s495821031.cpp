#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979
#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include<iomanip>
#include<vector>
#include<cmath>
#include <algorithm>

using namespace std;

int main(){

	for (int i = 1; i < 10; i++){
		for (int j = 1; j < 10; j++)
		{
			cout << i << "x" << j << "=" << i*j << endl;
		}
	}

}