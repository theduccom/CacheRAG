#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<cstdio>
#include<string.h>
using namespace std;

int main()
{
	double hosu, kaku, x=0, y=0, now=0;

	while (1)
	{
		scanf("%lf,%lf", &hosu, &kaku);
		if (hosu == kaku&&hosu==0)break;
		x += sin(now)*hosu;
		y += cos(now)*hosu;
		now += kaku / 180 * 3.1415;

	}
	int A = x;
	int B = y;
	cout << A<< endl << B << endl;
}