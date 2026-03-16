#include <iostream>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int rect = 0;
	int loze = 0;

	int a, b, c;
	char c1, c2;

	while(cin >> a >> c1 >> b >> c2 >> c)
{		if(a * a + b * b == c * c){
			rect++;
		} 
		if(a == b){
			loze++;
		}
	}

	cout << rect << endl;
	cout << loze << endl;

	return 0;
}