// 2010/12/22 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;
		if(n==0)
			break;

		int kosu[10];
		for(int i=0; i<10; i++)
			kosu[i] = 0;

		for(int i=0; i<n; i++){
			int ice;
			cin >> ice;
			kosu[ice]++;
		}

		for(int i=0; i<10; i++)
			if(kosu[i]!=0){
				for(int j=0; j<kosu[i]; j++)
					cout << '*';
				cout << endl;
			}
			else{
				cout << '-' << endl;
			}
	}

	return 0;
}