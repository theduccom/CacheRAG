// 2011/03/29 Tazoe

#include <iostream>
using namespace std;

int main()
{
	bool spc = false;

	while(true){
		int a, b;
		cin >> a >> b;
		if(a==0&&b==0)
			break;

		if(spc)
			cout << endl;
		else
			spc = true;

		bool flg = false;
		for(int i=a; i<=b; i++){
			if(i%400==0){
				cout << i << endl;
				flg = true;
			}
			else if(i%100==0){
				continue;
			}
			else if(i%4==0){
				cout << i << endl;
				flg = true;
			}
		}
		if(!flg)
			cout << "NA" << endl;
	}

	return 0;
}