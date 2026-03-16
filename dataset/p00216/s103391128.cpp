#include <iostream>
using namespace std;

int main(){
	int w;
	while(cin >> w , ~w){
		int ans = 1150;
		ans += max(0,min(10,w-10)*125);
		ans += max(0,min(10,w-20)*140);
		ans += max(0,(w-30)*160);
		cout << 4280-ans << endl;
	}
}