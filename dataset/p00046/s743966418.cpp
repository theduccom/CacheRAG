/*
 * src.cpp
 *
 *  Created on: 2016/07/26
 *      Author: joi
 */

#include <bits/stdc++.h>

using namespace std;

double a[50];

int main(){
	int i=0;
	while (scanf("%lf",&a[i])!=EOF){
		i++;
	}
	sort(a,a+i);
	cout<<a[i-1]-a[0]<<endl;
	return 0;
}