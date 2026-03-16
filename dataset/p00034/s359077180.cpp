#include <iostream>
#include <cstdio>
using namespace std;

const double EPS = 1.0e-6;
int main()
{
	int l[10];
	int v1,v2;
	while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2) > 0){
		int suml = 0;
		for(int i=0; i<10; i++){
			suml += l[i];
		}
		double time = 1.0*suml / (v1+v2);
		double miti = time*v1 - EPS;
		int ans = 0;
		for(int i=0, sl=0; i<10+1; i++){
			if(miti < sl){
				ans = i;
				break;
			}
			sl += l[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}