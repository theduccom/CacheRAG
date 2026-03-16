//2013/07/15(月) パソコン甲子園２０１０ー４　人気のアイスクリーム店

#include <iostream>
using namespace std;

int main()
{

	int n;
	int x;
	
	while(true){
		int k[10] = {0};

		cin >> n;
		if(n==0)
			break;

		for(int i=0; i<n; i++){
			cin >> x;
			k[x]++;
		}
		for(int i=0; i<10; i++){
			if(k[i] == 0)
				cout << '-' << endl;
			else{
				for(int j=0; j<k[i]; j++)
					cout << '*' ;
				cout << endl;
			}
		}
	}
	return 0;
}