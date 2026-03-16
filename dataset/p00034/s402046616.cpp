#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int l[10], v1, v2, suml, i;
	double t, cross;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2) != EOF){
		suml = 0;
		for(i=0;i<10;i++){
			suml += l[i];
		}
		t = suml / double(v1+v2);
		cross = t*v1;
		suml = 0;
		for(i=0;suml<cross;i++){
			suml += l[i];
		}
		cout << i << endl;
	}
	return 0;
}