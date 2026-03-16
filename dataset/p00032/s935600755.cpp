#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
using namespace std;

int main()
{
	int a, b, c, t = 0, h = 0;
	while(scanf("%d,%d,%d", &a, &b, &c) != EOF){
		if(a * a + b * b == c * c){
			t++;
		}else if(a == b){
			h++;
		}
	}
	cout << t << endl << h << endl;
}