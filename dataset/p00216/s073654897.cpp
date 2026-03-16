#include <iostream>
using namespace std;

int main(void){
	while(1){
		int w,ans=1150;
		cin >> w;
		if(w==-1)break;
		if(w>=10)ans+=125*(w-10);
		if(w>=20)ans+=15*(w-20);
		if(w>=30)ans+=20*(w-30);
		cout << 4280-ans << endl;
	}
	return 0;
}