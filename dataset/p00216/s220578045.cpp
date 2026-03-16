#include <iostream>
using namespace std;

int main(void){
	int w;

	while(cin>>w && w != -1){
		int sum = 1150;

		for(int i=11;i<=w && i<=20;i++) sum += 125;
		for(int i=21;i<=w && i<=30;i++) sum += 140;
		for(int i=31;i<=w;i++) sum += 160;

		cout<<4280-sum<<endl;
	}

	return 0;
}