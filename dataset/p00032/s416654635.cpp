#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a,b,c;
	int ans1 = 0 , ans2 = 0;

	while(scanf("%d,%d,%d", &a , &b , &c) != EOF){

		//if(a == 0 && b == 0 && c == 0) break;
		if(a != b && a != c){
			ans2++;
		}
		if(a == b && a != c && b != c){
			ans1++;
		}
	}

	cout << ans1 << endl;
	cout << ans2 << endl;

	return 0;
}