#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
	double line[10];
	double v1,v2;

	while( scanf("%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",&line[0],&line[1],&line[2],&line[3],&line[4],&line[5],&line[6],&line[7],&line[8],&line[9],&v1,&v2) != EOF ){

		double sum = 0;

		for( int i = 0;i < 10;i++ ){
			sum += line[i];
		}

		double time = sum / ( v1 + v2 );

		double dist = time * v1;


		for( int i = 0;i < 10;i++ ){
			dist -= line[i];

			if( dist <= 0 ){
				cout << i + 1 << endl;
				break;
			}
		}
	}

	return 0;
}