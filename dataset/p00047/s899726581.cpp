#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a[3] = { 0 };
	a[0] = 1;
	int x, y;
	char al[4] = {"ABC"};
	char s, s2, t;
	while ((cin>>s>>t>>s2)){

		if (s == 'A'){
			x = 0;
		}
		else if (s == 'B'){
			x = 1;
		}
		else if (s == 'C'){
			x = 2;
		}
		if (s2 == 'A'){
			y = 0;
		}
		else if (s2 == 'B'){
			y = 1;
		}
		else if (s2 == 'C'){
			y = 2;
		}
		swap(a[x], a[y]);
	}
	for (int i = 0; i < 3; i++){
		if (a[i]){
			cout << al[i] << endl;
			break;
		}
	}
}