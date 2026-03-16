#include <bits/stdc++.h>
using namespace std;

int l[12];
int main(){
	while(scanf("%d",l)!=-1){
		double s = l[0];
		for(int i = 1 ; i < 12 ; i++){
			scanf(",%d",&l[i]);
			if( i < 10 ) s += l[i];
		}
		double a = l[10];
		double b = l[11];
		double x = 1.0 * s / (a+b) * a;
		int s2 = 0;
		for(int i = 0 ; i < 10 ; i++){
			if( s2 + l[i] > x - 1e-9 ){
				cout << i+1 << endl;
				break;
			}
			s2 += l[i];
		}
		
		
		

	}
	
}