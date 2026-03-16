#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	string str,rev;
	int ans=0;
	while(cin >> str){
		rev = string(str.rbegin(),str.rend());
		if(str==rev)ans++;
	}
	cout << ans << endl;
return 0;
}