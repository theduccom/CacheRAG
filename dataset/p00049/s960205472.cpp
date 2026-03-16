#include <iostream>
using namespace std;
int main(void)
{
	int m;
	int n[4]={0};
	while(cin >> m){
		char c[5];
		cin >> c;
		if(c[1]=='A'){
			if(c[2]=='B') n[2]++;
			else n[0]++;
		}else if (c[1] == 'B') n[1]++;
		else n[3]++;
	}
	for(int i=0; i<4; i++){
		cout << n[i] << endl;
	}
	return 0;
}