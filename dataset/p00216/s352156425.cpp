#include <iostream>
using namespace std;

int main(void){
	int w;

	while(1){
		cin>>w;
		if(w == -1){
			break;
		}

		int ans = 1150;
		for(int i=11;i<=20 && i<=w;i++){
			ans += 125;
		}
		for(int i=21;i<=30 && i<=w;i++){
			ans += 140;
		}
		for(int i=31;i<=w;i++){
			ans += 160;
		}

		cout<<4280-ans<<endl;
	}

	return 0;
}