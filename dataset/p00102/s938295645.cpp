#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void){
	//FILE* fp_in = freopen("data.txt", "r", stdin);

	while(1){
		int n;
		cin >> n;
		if( n == 0 ) break;
		vector< vector < int > > m;
		vector< int > v;
		for(int i = 0; i < n; i++)
			v.push_back( 0 );
		for(int i = 0; i < n; i++)
			m.push_back( v );

		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> m[j][i];

		int ssum = 0;
		for(int i = 0; i < n; i++) {
			int sum = 0;
			for(int j = 0; j < n; j++) {
				printf("%5d", m[j][i]);
				sum += m[j][i];
			}
			ssum += sum;
			printf("%5d\n", sum);
		}
		for(int i = 0; i < n; i++) {
			int sum = 0;
			for(int j = 0; j < n; j++) {
				sum += m[i][j];
			}
			printf("%5d", sum);
		}
		printf("%5d\n", ssum);

	}
 
	//while (1){}
	return 0;
}