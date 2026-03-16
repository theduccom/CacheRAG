#include <iostream>

using namespace std;

typedef long long int lli;

int main()
{
	lli n, t;
	
	while(cin>>n && n){
		t = 0;
		while(n/5 > 0){
			t += n/5;
			n /= 5;
		}
		
		cout << t << endl;
	}
	
	return 0;
}