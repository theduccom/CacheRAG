// Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int cnt[10];
		for(int i=0; i<10; i++){
			cnt[i] = 0;
		}

		for(int i=0; i<n; i++){
			int ice;
			cin >> ice;

			cnt[ice]++;
		}

		for(int i=0; i<10; i++){
			if(cnt[i]==0){
				cout << '-' << '\n';
			}
			else{
				for(int j=0; j<cnt[i]; j++){
					cout << '*';
				}
				cout << '\n';
			}
		}
	}

	return 0;
}