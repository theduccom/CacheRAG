//長方形⇔直角三角形、ひし形⇔2等辺三角形
//長方形かつひし形の物は、両方カウント
#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	int cnt1 = 0,cnt2 = 0;
	
	while( scanf("%d,%d,%d",&a,&b,&c) != -1 ){
		
		if( a*a + b*b == c*c )
			cnt1++;
		if( a == b )
			cnt2++;
	}
	cout << cnt1 << endl << cnt2 << endl;
	return 0;
}