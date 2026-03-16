#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;


int main(){
	int n1 = 0, n2 = 0, n3 = 0;
	char c1, c2;
	int tyouhou = 0, hishi = 0, count = 0;
		
	while(cin >> n1 >> c1 >> n2 >> c2 >> n3){
		if(n1*n1 + n2*n2 == n3*n3) tyouhou++;
		if(n1 == n2) hishi++;
		count++;
		/*cout << "tyouhou = " << tyouhou << endl;
		cout << "hishi = " << hishi << endl;
		cout << "count = " << count << endl;*/
	}

	cout << tyouhou << endl << hishi << endl;

	return 0;
}