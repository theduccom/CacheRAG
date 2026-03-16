#include<iostream>
using namespace std;

int main() {
	int num[14] = {1,5,10,50,100,500,1000,0,3,8,30,80,300,800};
	int nownum;
	int sum;
	char broma;
	char roma;
	string hoge;
	
	while ( cin >> hoge ) {
		sum = 0;
		broma = 10;
		for ( int i = 0; i < hoge.length(); i++ ) {
			roma = hoge[i];
			nownum = string("IVXLCDM").find(roma);
			if ( broma < nownum )
				sum = sum + num[nownum + 7];
			else
				sum = sum + num[nownum];
			broma = nownum;
		}
		cout << sum << endl;
	}
	
}