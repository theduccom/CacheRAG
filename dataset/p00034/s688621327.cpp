#include<iostream>
#include<string>
using namespace std;

int main(){
	int l[10], v0, v1;
	string in;
	while( cin >> in ){
		sscanf( in.c_str(), "%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v0,&v1 );
		int sum=0;
		for( int i=0; i<10; i++ ){
			sum += l[i];
		}
		double t = (double)sum / (double)(v0+v1);
		double len = t * v0;
		int i=0;
		for(; i<10; i++ ){
			len -= l[i];
			if( len <= 0.0 )	break;
		}
		cout << i+1 << endl;
	}
	return 0;
}