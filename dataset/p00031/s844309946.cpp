#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
	int w[10]={1,2,4,8,16,32,64,128,256,512};
	int start;
	while(1){
		cin >> n;
		if(cin.eof()){break;}
		int	flag[10]={0};
		start=0;

		// n - w[i] で引けた配列番号を flag[i] で記憶

		for(int i=9 ; i>=0; i--){
			if(n>=w[i]){
				n-=w[i];
				flag[i]++;
				start=i;
			}
		}

		// flag[i] が 0 でなければ w[i] を表示

		cout << w[start];
		for(int i=start+1; i<=9 ; i++){
			if(flag[i]!=0){
				cout << " " << w[i];
			}
		}
		
		cout << endl;
	}
	return 0;
}