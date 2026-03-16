#include <string>
#include <iostream>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <algorithm>
 
using namespace std;

  
int main(){

	int cntData = 0;
	int vSum = 0;
	int nSum = 0;

	int v, n;

	while(~scanf("%d,%d", &v, &n)){
		cntData++;
		vSum += v*n;
		nSum += n;
	}

	int nAve;
	nAve = nSum*10;
	nAve /= cntData;
	if(nAve%10 > 4){
		nAve+=10;
	}
	nAve/=10;

	cout << vSum << endl;
	cout << nAve << endl;

	return 0;
}