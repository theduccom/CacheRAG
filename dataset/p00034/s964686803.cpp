#include<iostream>
#include<cstdio>
using namespace std;

int main(){

	int l[10], v[2];
	double x;
	
/*	while(scanf("%d", &l[0]) != EOF){
		for(int i=1; i<10; i++){
			scanf("%d", &l[i]);
			l[i] += l[i-1];
		}
		scanf("%d, %d", &v[0], &v[1]);
*/
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,"
			,&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v[0],&v[1]) != EOF){

		for(int i=1; i<10; i++){
			l[i] += l[i-1];
		}

//		for(int i=0; i<10; i++)
//			cout << l[i] << " ";
//		cout << v[0] << " " << v[1] << endl;
		
		x = (double)l[9] * v[0] / (v[0] + v[1]);
//cout << x << " " << endl;
		for(int i=0; i<10; i++){
			if(x <= (double)l[i]){
				cout << i+1 << endl;
				break;
			}
		}
	}

	return 0;

}