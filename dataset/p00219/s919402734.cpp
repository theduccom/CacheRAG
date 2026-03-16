// 2013/09/17 Tazoe

#include <iostream>
using namespace std;

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int cnt[10] = {0};
		for(int i=0; i<n; i++){
			int m;
			cin >> m;

			cnt[m]++;
		}

		for(int i=0; i<10; i++){
			if(cnt[i]==0){
				cout << '-' << endl;
				continue;
			}

			for(int j=0; j<cnt[i]; j++){
				cout << '*';
			}
			cout << endl;
		}
        }

	return 0;
}