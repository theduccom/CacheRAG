#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void){

	vector< double > ds;
	double d;

	while( scanf("%lf",&d) != EOF ) {
		ds.push_back( d );
	}
	sort( ds.begin(), ds.end() );
	printf("%.4lf\n",  ds[ds.size()-1] - ds[0] );

    return 0;
}